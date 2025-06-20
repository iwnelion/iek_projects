// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

/// @custom:dev-run-script ./scripts/deploy.js
contract Warehouse {

    // Δομή για αποθήκευση προϊόντων
    struct Product {
	    uint productId;
        string name;
        uint quantity;
        uint price;
    }

    // Χάρτης για αποθήκευση προϊόντων με ID
    mapping(uint => Product) public products;

    // Μετρητής για την ID του κάθε προϊόντος
    uint public productCount;

    // Συμβάντα
    event ProductAdded(uint productId, string name, uint quantity, uint price);
    event ProductUpdated(uint productId, uint newQuantity, uint newPrice);
    event ProductRemoved(uint productId);

    // Πρόσθεση νέου προϊόντος
    function addProduct(string memory _name, uint _quantity, uint _price) public {
         productCount++;
	    //create and log new product
        products[productCount] = Product({productId: productCount,name: _name, quantity: _quantity, price: _price});
        emit ProductAdded(productCount,_name, _quantity, _price);
    }

    // Ενημέρωση ποσοτήτων και τιμών προϊόντος
    function updateProduct(uint _productId, uint _newQuantity, uint _newPrice) public {
        //message if the product does not exist
        require(_productId > 0 && _productId <= productCount, "This product does not exist.");
        Product storage product = products[_productId];     //find the product
        product.quantity = _newQuantity;                    //update quantity
        product.price = _newPrice;                          //update price
        emit ProductUpdated(_productId, _newQuantity, _newPrice);
    }

    // Διαγραφή προϊόντος
    function removeProduct(uint _productId) public {
        //message if the product does not exist
        require(_productId > 0 && _productId <= productCount, "This product does not exist.");
        delete products[_productId];                        //delete the product
        emit ProductRemoved(_productId); 
    }

    // Λήψη πληροφοριών προϊόντος
    function getProduct(uint _productId) public view returns (string memory, uint, uint) {
        //message if the product does not exist
        require(_productId > 0 && _productId <= productCount, "This product does not exist.");
        Product memory product = products[_productId];      //get product
        return (product.name, product.quantity, product.price);
    }
}
