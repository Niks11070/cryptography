#include<iostream>
    #include<cctype>
    using namespace std;
    // function to encrypt plaintext using caesar cipher
    string encrypt(string plaintext,int key)
    {
        string ciphertext =" ";
        for(char ch: plaintext){
            if(isalpha(ch)){
                char base = islower(ch)?'a' : 'A';
                ciphertext += (ch - base +key) % 26 + base;
            }
            else{
                ciphertext += ch;
            }
        }
        return ciphertext;
    }
    // function to decrypt ciphertext using Caeser Cipher
    string decrypt(string ciphertext,int key)
    {
        string plaintext = " ";
        for(char ch: ciphertext){
            if(isalpha(ch)){
                char base = islower(ch) ? 'a' : 'A';
                plaintext += (ch - base - key + 26) % 26 + base;
            }
            else{
                plaintext += ch;
            }
        }
        return plaintext;
    }
    
    int main()
    {
    string text;
    int key;
    cout<<"Enter plain text :";
    cin>>text;
    cout<<"Enter key : ";
    cin>>key;
    string ciphertext = encrypt(text,key);
    cout<<"\nEncryption : \n";
    cout<<"Cipher : "<<ciphertext<<endl;
    cout<<"\ndecryption : \n";
    cout<<"Plain text : "<<decrypt(ciphertext,key)<<endl;
    return 0;
    }
    
