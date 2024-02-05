# Online Banking System Using C Lang.
> *Online Banking System is an application developed using C Language involves creating operations of a typical banking system.The program should be able to handle various banking operations,such as checking account balance, depositing, changing password,online payment, and cash withdrawal. The program also includes an option for an admin to register or delete an account.*

## Here is an overview of the online banking system project in C language:

- **User Interface:**
  - The program will have a user-friendly interface that allows users and admins to easily access their accounts and perform banking operations. This can be achieved using a menu-driven system where users can select options from a list of available services.Admin login has two modules: account registration and account deletion. Admin can create new accounts and delete existing ones with a default deletion pin.
  
- __Structure Formation for DataEntry :__
    - Construct one structure that will maintain the information of a User such as his Username,IFSC Code, Phone, Balance,Transaction ID, Password, Transaction Pin and Account Number in a file named as per the Phone number user have entered with “.dat” extension.

- __MainMenu Module :__
     In this function, User have to choose for an option in each provided modules.
    - 1.Admin Login
   - 2.Customer Login
    - 3.Exit

- __Admin Login :__
    - If User enters 1 in the Main Menu Module, User will be entered into this Admin Login Module. In which further there will be 2 more modules.
        - __1.Account Registration :__ In Account Registration, Admin can Create a new account for the new user by collecting all the data from the user.
        - __2.Account Deletion :__ In Account Deletion, Admin will have access to delete any users account with the owner permission and concern, In this Process Admin will be asked for “Deletion Pin” which is “`0000`” set by Default.
        -  __3.Admin Logout :__ In Admin Logout, Admin will be loged out and Program will be terminated. To return as 
        User or login as Admin, it is advised to relaunch the program.


- __CustomerLogin :__
    - If User enters 2 in the Main Menu Module, User will be entered into this Customer Login Module .For logging in as a customer, User have to enter the Registered Phone Numer and Password.After Verification and succesfull login, further there will be 6 more modules.
        - __1.Account Status__ 
        - __2.Deposit__ 
        - __3.Password Changing__
        - __4.Online Payee Management__
        - __5.Cash Withdraw__
        - __6.Account Logout__
    - User will be asked to enter his choice to move further
    All these 6 Modules will be explained Individually below..
        - __Account Status Module :__
            - If User enters 1 in the Customer Login Module, User will be entered into this Account Status Module. In which further User can view his Account Status such as :
                - __1.Account Holder Name__
                - __2.Account Holder Phone Number__
                - __3.Overdrawn Status__
                - __4.Current Balance__
                - __5.Account Status (Active\Inactive).__
                
                 And also User will be asked for Retuning to Customer Login Module.
                
        - __DepositModule :__
            - If User enters 2 in the Customer Login Module, User will be entered into this Deposit Module. In which further User can add funds into his account online by process, User will be asked for Amount to be added. After Successful Deposit User will be shown a message that fund was added to account successfully.
            And also User will be asked for Retuning to Customer Login Module.
            
        - __Password Changing Module :__
            - If User enters 3 in the Customer Login Module, User will be entered into this Password Changing Module .User will be asked for his Old Password, After Successful verification of Old Password, User can create his own New Password. After Successful Password change User will be shown a message that Account Password
            Changed Successfully.
            And also User will be asked for Retuning to Customer Login Module.
        - __Online Payment Module :__
            -  User enters 4 in the Customer Login Module, User will be entered into this Online Payee Management Module .User will be asked for Receiver’s registered Phone Number, After Successful verification of Receiver’s registered Phone Number, User will be asked for the amount to be transferred and Transaction Pin. After Successful Transaction Pin Verification, User will be shown Account Details, Transaction ID and Balance left and a message showing Your Transfer is completed. You have transfered Rs.X to XXXXXXXXX.
            And also User will be asked for Retuning to Customer Login Module.
        - __CashWithdrawal Module :__ 
            - If User enters 5 in the Customer Login Module, User will be entered into this Cash Withdraw Module. In which further User can Withdraw funds from his account online .By process, User will be
            asked for Amount to Withdraw .After Successful Withdrawal, User will be shown a message that fund was Withdrawn from his account successfully.
            And also User will be asked for Retuning to Customer Login.
                - Note: The amount entered by user must be multiple of 500.

        - __Account Logout Module :__
            - If User enters 6 in the Customer Login Module, User will use this Account Logout Module once and User user will be Logged Out with all the needed security measures. By using this module user can  and will be returned to Main Menu Module .

- __Exit Module :__
    - If User enters 3 in the Main Menu Module, The Program will be terminated with a message showing Thanks for Banking with CPBank.


