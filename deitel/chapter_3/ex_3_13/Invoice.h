#include <string>

class Invoice {
public:
    Invoice(std::string, std::string, int, int);
    void setPartNumber(std::string);
    void setPartDescription(std::string);
    void setPurchasedQty(int);
    void setItemPrice(int);
    std::string getPartNumber();
    std::string getPartDescription();
    int getPurchaseQty();
    int getItemPrice();
    int getlnvoiceAmount();
    void displayMessage();
private:
    std::string partNumber;
    std::string partDescription;
    int purchasedQty;
    int itemPrice;
};

