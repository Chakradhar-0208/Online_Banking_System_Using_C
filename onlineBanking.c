    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    struct user {
    char phone[50],ac[50],password[50],UName[50],IFSC[50],Tpin[50],r_ac[50];
     float balance;
     int t_id;
    };
    void fordelay(int j)
    { int i,k;
     for(i=0;i<j;i++)
     k=i;
    }
    int menu(){
    int opt;
    printf("\n\tMain Menu");
    printf("\n\n \t\t 1.Admin Login");
    printf("\n\t\t 2.Customer Login");
    printf("\n\t\t 3.Exit");
    printf("\n\n\tPlease enter your choice:\t");
    scanf("%d",&opt);
    return opt;}
    int main(){
    struct user user,usr;float balance;
    char filename[50],phone[50],password[50];
    FILE *fp,*fptr;
    int opt,choice,ret,amount,i,tpin,t_id;
    char cont = 'y';
    opt=menu();
    if(opt == 1){
     printf("\n\n\t\tAdmin Login Successful\n\n");
     printf("\n\tPress 1 for Account Registration\n");
     printf("\tPress 2 for Account Deletion\n");
     printf("\tPress 3 for Admin Logout\n");
     printf("\n What action do you want to take?: ");
     scanf("%d",&choice);
     switch(choice){
    case 1:
     printf("\n\tEnter your account number:\t");
     scanf("%s",user.ac);
     printf("\tEnter your phone number:\t");
     scanf("%s",user.phone);
     printf("\tEnter your Username:\t");
     scanf("%s",user.UName);
     printf("\tCreate your Password:\t");
     scanf("%s",user.password);
     printf("\tEnter your IFSC Code:\t");
     scanf("%s",user.IFSC);
     printf("\tCreate your TPin:\t");
     scanf("%s",user.Tpin);
     user.balance=8000;
     strcpy(filename,user.phone);
     fp=fopen(strcat(filename,".dat"),"w");
     fwrite(&user,sizeof(user),1,fp);
     if(fwrite != 0){
     printf("\n\t\tSuccessfully registered\n\t\tRestart the program to save the changes!");
     for(i=0;i<6;i++){
     fordelay(100000000000000);
     printf(".");}
     printf("\n\n Do you want to Main Menu?[y/n]:\t");
     cont='n';
     scanf("%s",&cont);
     if (cont=='y'){
     main();
     }}
    break;
    case 2:
     printf("\n\n\tEnter Phone NO. : ");
     scanf("%s",&filename);
     strcat(filename,".dat");
     printf("\n\tEnter Deletion Pin : ");
     scanf("%d",&tpin);
     if (tpin==0000){
     ret = remove(filename);
     if(ret == 0) {
     printf("\n\t\tDeleting.");
     for(i=0;i<6;i++){
     fordelay(1000000000000);
     printf(".");}
     printf("\n\n\t\tAccount deleted successfully");
     printf("\n\n Do you want to Main Menu?[y/n]:\t");
     scanf("%s",&cont);
     if (cont=='y'){
     main();
     }
     } else {
     printf("\n Check the Phone NO. / Deletion Pin & Re-Enter\n");
     printf("\n\n Do you want to Main Menu?[y/n]:\t");
     scanf("%s",&cont);
     if (cont=='y'){
     main();
     }
     }}
     else{
     printf("\n\t\tInvalid Deletion Pin");
     printf("\n\n Do you want to Main Menu?[y/n]:\t");
     scanf("%s",&cont);
     if (cont=='y'){
     main();
     }
     }
     break;
     case 3:
     printf("\n\n**Thank you for banking with CP bank**\n\n");
     return 0;
     break;}
    }
    if(opt == 2){
     char TPin[50];
     printf("\nLoading.");
     for(i=0;i<6;i++){
     fordelay(100000000);
     printf(".");}
    printf("\n\n\tPhone No.:\t");
    scanf("%s",phone);
    printf("\n\tPassword:\t");
    scanf("%s",password);
    fp = fopen(strcat(phone,".dat"),"r");
    if(fp == NULL){
            printf("\n\n\t\tPhone number not registered...\n\n\t\tLogin as Admin to Register a New Account\n");
            printf("\n\n Do you want to Main Menu?[y/n]:\t");
     scanf("%s",&cont);
     if (cont=='y'){
     main();
     }
            }
    else {
    fread(&user,sizeof(struct user),1,fp);
    fclose(fp);
    if(!strcmp(password,user.password)){
    while(cont == 'y'){
     printf("\n\n\t\tCustomer Login Successful\n\n");
    printf("\n\tWelcome %s\n",user.UName);
    printf("\n\tPress 1 for Account Status");
    printf("\n\tPress 2 for Deposit");
    printf("\n\tPress 3 for Changing Password");
    printf("\n\tPress 4 for Online Payment");
     printf("\n\tPress 5 for Cash withdraw");
     printf("\n\tPress 6 for Account Logout\n");
    printf("\n\tPlease enter your choice:\t");
    scanf("%d",&choice);
    switch(choice){
    case 1:
     printf("\n\tAccount Holder Name: %s\n",user.UName);
     printf("\tAccount Holder Phone NO.: %s\n",user.phone);
     printf("\tAccount Holder TPin NO.: %s\n",user.Tpin);
     if (user.balance<0)
     printf("\tAccount Overdrawn: Yes\n");
     else
     printf("\tAccount Overdrawn: No\n");
     printf("\tYour current balance : Rs. %.2f\n",user.balance);
     printf("\tYour Account Status: Active\n");
    break;
    case 2:
    // system("clear");
    printf("\n\tEnter amount to be added:\t");
    scanf("%d",&amount);
    user.balance += amount;
    fp = fopen(user.phone,"w");
    fwrite(&user,sizeof(struct user),1,fp);
    if(fwrite !=0) printf("\n\n\t\tYou have deposited Rs.%d",amount);
    fclose(fp);
    break;
    case 5:
    printf("\n\tEnter withdrawl amount:\t");
    scanf("%d",&amount);
    if(amount % 500 != 0) printf("\n\t\tSorry amount should be multiple of 500");
    else if(amount>user.balance) printf("\nTransaction failed due to Insufficient Balance");
    else {
    user.balance -= amount;
    fp = fopen(phone,"w");
    fwrite(&user,sizeof(struct user),1,fp);
    if(fwrite !=0) printf("\n\n\t\tYou have withdrawn Rs.%d",amount);
    fclose(fp);
    }
    break;
    case 4:
    printf("\n\tPlease enter the phone number to transfer balance:\t");
    scanf("%s",phone);
    printf("\tEnter the amount to transfer:\t");
    scanf("%d",&amount);
    printf("\tEnter TPin: ");
    scanf("%s",TPin);
    printf("\nProcessing.");
     for(i=0;i<6;i++){
     fordelay(100000000);
     printf(".");}
    if(!strcmp(TPin,user.Tpin)){
    if(amount > user.balance) printf("\n\n\t\tSorry insufficient balance");
    else {
    fptr = fopen(strcat(phone,".dat"),"r");
    if(fptr==NULL) printf("\n\n\t\tSorry, Recipient number is not registered");
    else {
    fread(&usr,sizeof(struct user),1,fptr);
    fclose(fptr);
    user.balance -= amount;
    usr.balance+=amount;
    fptr = fopen(phone,"w");
    fwrite(&usr,sizeof(struct user),1,fptr);
    if(fwrite != 0){
    printf("\n\n\tAccount NO.: %s\n",usr.ac);
    printf("\tTransaction ID.:TNX_%d58975\n",t_id);
    printf("\tBalance: %f\n",user.balance);
    printf("\n\tYour Transfer is completed. You have transfered Rs.%d to %s\n",amount,usr.phone);
    fclose(fptr);
    user.balance -= amount;
    strcpy(filename,user.phone);
    fp =
    fopen(strcat(filename,".dat"),"w");
    fwrite(&user,sizeof(struct
    user),1,fp);
    fclose(fp);
    }
    }
    }}
    else
     printf("\n\t\tInvalid TPin");
    break;
    case 6:
     main();
     break;
    case 3:
    printf("\n\n\tPlease enter your old password:\t");
    scanf("%s",password);
    if(!strcmp(password,user.password)){
    printf("\n\tPlease enter your new password:\t");
    scanf("%s",password);
    strcpy(user.password,password);
    strcpy(filename,user.phone);
    fp = fopen(strcat(filename,".dat"),"w");
    fwrite(&user,sizeof(struct user),1,fp);
    fclose(fp);
    printf("\n\n\t\tPassword Successfully Changed");
    }else printf("\n\n\t\tIncorrect password entered...");
    default:
    break;
    }
    printf("\n\nDo you want to continue?[y/n]:\t");
    scanf("%s",&cont);
    }
    }
    else {
    printf("\n\t\tInvalid password");
    printf("\n\n Do you want to Main Menu?[y/n]:\t");
     scanf("%s",&cont);
     if (cont=='y'){
     main();
     }
    }
    }
    printf("\n\n\t\t\t\t\t***Thank you for banking with CPBank.***\n\n");
    }
    return 0;
    }


