class Account {
public:
    Account( int );
    void setBalance( int );
    int getBalance();
    void credit( int );
    void debit( int );
private:
    int accountBalance;
};
