#include "MyFunctons.h"
#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()

using namespace std ;

void ORprocess(){
    string s1 , s2 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" OR GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";
    cout << string(19,' ') << "Enter two binary strings from same size  \n\n";

    cout << "Enter first  binary string: ";
    cin >> s1 ;
    cout << "Enter second binary string: ";
    cin >> s2 ;
    cout << "\n";
    cout << string(30,' ') << " Result = x + y\n\n";
    cout << string(30,' ') << "| x "<<"|"<<" y | "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"---|"<<"--------|\n";

    for( int i = 0 ; i < s2.size() ; ++i )
    cout << string(30,' ') << "| " << s1[i]
        << " | " << s2[i] << " | "
        << "  " << ( s1[i]-'0' | s2[i]-'0' ) << string(4,' ') << "|\n" ;

    cout << "\n" << string(86,'-') << "\n";
}
void ANDprocess(){
    string s1 , s2 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" AND GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";

    cout << string(19,' ') << "Enter two binary strings from same size  \n\n";
    cout << "Enter first  binary string: ";
    cin >> s1 ;
    cout << "Enter second binary string: ";
    cin >> s2 ;
    cout << "\n";
    cout << string(30,' ') << " Result = x . y\n\n";
    cout << string(30,' ') << "| x "<<"|"<<" y | "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"---|"<<"--------|\n";

    for( int i = 0 ; i < s2.size() ; ++i )
    cout << string(30,' ') << "| " << s1[i]
        << " | " << s2[i] << " | "
        << "  " << ( s1[i]-'0' & s2[i]-'0' ) << string(4,' ') << "|\n" ;
    cout << "\n" << string(86,'-') << "\n";
}
void NOTprocess(){
    string s1 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(11,'-')<<string(3,'<')<<" NOT GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";

    cout << string(19,' ') << "The process just on one binary string\n\n";
    cout << "Enter just on binary string : ";
    cin >> s1 ;
    cout << "\n";
    cout << string(30,' ') << " Result = !x \n\n";
    cout << string(30,' ') << "| x "<<"|"<<" "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"--------|\n";

    for( int i = 0 ; i < s1.size() ; ++i )
    cout << string(30,' ') << "| " << s1[i]
         << " | " << "  " << !( s1[i]-'0' ) << string(4,' ') << "|\n" ;
    cout << "\n" << string(86,'-') << "\n";
}
void Bufferprocess(){
    string s1 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(11,'-')<<string(3,'<')<<" Buffer GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";

    cout << string(19,' ') << "The process just on one binary string\n\n";
    cout << "Enter just on binary string : ";
    cin >> s1 ;
    cout << "\n";
    cout << string(30,' ') << " Result = x \n\n";
    cout << string(30,' ') << "| x "<<"|"<<" "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"--------|\n";

    for( int i = 0 ; i < s1.size() ; ++i )
    cout << string(30,' ') << "| " << s1[i]
         << " | " << "  " << s1[i] << string(4,' ') << "|\n" ;
    cout << "\n" << string(86,'-') << "\n";
}
void XORprocess(){
    string s1 , s2 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" XOR GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";

    cout << string(19,' ') << "Enter two binary strings from same size  \n\n";
    cout << "Enter first  binary string: ";
    cin >> s1 ;
    cout << "Enter second binary string: ";
    cin >> s2 ;
    cout << "\n";
    cout << string(30,' ') << " Result = x ^ y\n\n";
    cout << string(30,' ') << "| x "<<"|"<<" y | "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"---|"<<"--------|\n";
    for( int i = 0 ; i < s2.size() ; ++i )
    cout << string(30,' ') << "| " << s1[i]
        << " | " << s2[i] << " | "
        << "  " << ( s1[i]-'0' ^ s2[i]-'0' ) << string(4,' ') << "|\n" ;
    cout << "\n" << string(86,'-') << "\n";
}
void XNORprocess(){
    string s1 , s2 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" XNOR GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";

    cout << string(19,' ') << "Enter two binary strings from same size  \n\n";
    cout << "Enter first  binary string: ";
    cin >> s1 ;
    cout << "Enter second binary string: ";
    cin >> s2 ;
    cout << "\n";
    cout << string(30,' ') << " Result = !(x ^ y)\n\n";
    cout << string(30,' ') << "| x "<<"|"<<" y | "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"---|"<<"--------|\n";
    for( int i = 0 ; i < s2.size() ; ++i )
    cout << string(30,' ') << "| " << s1[i]
        << " | " << s2[i] << " | "
        << "  " << !( s1[i]-'0' ^ s2[i]-'0' ) << string(4,' ') << "|\n" ;
    cout << "\n" << string(86,'-') << "\n";
}
void NORprocess(){
    string s1 , s2 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" NOR GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";

    cout << string(19,' ') << "Enter two binary strings from same size  \n\n";
    cout << "Enter first  binary string: ";
    cin >> s1 ;
    cout << "Enter second binary string: ";
    cin >> s2 ;
    cout << "\n";
    cout << string(30,' ') << " Result = !(x + y)\n\n";
    cout << string(30,' ') << "| x "<<"|"<<" y | "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"---|"<<"--------|\n";
    for( int i = 0 ; i < s2.size() ; ++i )
    cout << string(30,' ')  << "| " << s1[i]
        << " | " << s2[i] << " | "
        << "  " << !( s1[i]-'0' | s2[i]-'0' ) << string(4,' ') << "|\n" ;
    cout << "\n" << string(86,'-') << "\n";
}
void NANDprocess(){
    string s1 , s2 ;
    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" NAND GATE " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";

    cout << string(19,' ') << "Enter two binary strings from same size  \n\n";
    cout << "Enter first  binary string: ";
    cin >> s1 ;
    cout << "Enter second binary string: ";
    cin >> s2 ;
    cout << "\n";
    cout << string(30,' ') << " Result = !(x . y)\n\n";
    cout << string(30,' ') << "| x "<<"|"<<" y | "<<"Result |\n";
    cout << string(30,' ') << "|---"<<"|"<<"---|"<<"--------|\n";
    for( int i = 0 ; i < s2.size() ; ++i )
    cout << string(30,' ') << "| " << s1[i]
        << " | " << s2[i] << " | "
        << "  " << !( s1[i]-'0' & s2[i]-'0' ) << string(4,' ') << "|\n" ;
    cout << "\n" << string(86,'-') << "\n";
}
void One_sComplement(){
    string s ;

    cout << "\n" << string(86,'-') << "\n";
    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" One's Complement " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";
    cout << "Enter the binary string to get its 1'S complement : ";cin >> s ;
    cout  << "Result : ";
    for(int i = 0 ; i < s.size() ; ++i)
        cout << !(s[i]-'0');
    cout << "\n" << string(86,'-') << "\n";
}
void two_sComplement(){
    cout << "\n" << string(86,'-') << "\n";
    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" two's Complement " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";
    cout << "Enter The binary string to get 2's complement: ";
    string s2 ; cin >> s2 ;
    int ind = s2.find_last_of('1') ;
    for(int i = 0 ; i != ind ; ++i){
        s2[i] = (!(s2[i]-'0'))+'0';
    }
    cout << "Result : " << s2 ;
    cout << "\n" << string(86,'-') << "\n";
}
void AddingTwoNumbers(){

    string s1 , s2 ;
    cout << "\n" << string(86,'-') << "\n";
    cout << "\n" << string(19,' ')
    <<string(13,'-')<<string(3,'<')<<" Adding Two Numbers " << string(3,'>') <<string(11,'-')
    <<string(15,' ')
    <<"\n\n";
    cout << "if you want to enter them as binary string choose 1. or, decimal number choose 2 : ";
    int n_ ; cin >> n_ ;
    if ( n_ == 1 ){

        cout << "Enter first  binary string: ";
        cin >> s1 ;
        cout << "Enter second binary string: ";
        cin >> s2 ;
        auto TestSize = [&](string &s1_,string &s2_){
             if ( s1_.size() < s2_.size() ){
                int sz = int( s2_.size() - s1_.size() ) ;
                for(int i = 1 ; i <= sz ; ++i)
                    s1_.insert(s1_.begin(),'0');
            }
            else if ( s1_.size() > s2_.size() ){
                int sz = int( s1_.size() - s2_.size() ) ;
                for(int i = 1 ; i <= sz ; ++i)
                    s2_.insert(s2_.begin(),'0');
            }
        };
        auto convert = [&](string s1_){
            reverse(all(s1_));
            int sz = s1_.size() ;
            int no = 0LL ;
            for(int i = 0 ; i < sz ; ++i){
                no+=(1LL<<i)*(s1_[i]-'0');
            }
            return no ;
        };
        auto converttostr = [&](long long no){
            string s_ = "" ;
            while(no){
                s_.insert(s_.begin(),( no%2LL +'0'));
                no/=2LL;
            }
            //reverse(all(s));
            return s_ ;
        };
        TestSize(s1,s2);
        cout << convert(s1) << " + " << convert(s2) << " = " << convert(s1)+convert(s2) << "\n" ;
        auto DisplayInSameSize = [&]( string &_ ){
            if(_.size() == s1.size())///since, s1.size()==s2.size(), doesn't matter s1 or s2
            return _ ;
            else if( _.size() < s1.size() ){
                for(int i = 1 ; i <= ( s1.size() - _.size() ) ; ++i)
                    _.insert(_.begin(),'0');
            }
            else if( _.size() > s1.size() ){
                for(int i = 1 ; i <= ( _.size() - s1.size() ) ; ++i)
                    _.insert(_.begin(),'0');
            }
            return _ ;
        };
        string tmp = converttostr( convert(s1) + convert(s2) ) ;
        cout<< s1 << " + " << s2 << " = " << DisplayInSameSize( tmp ) << "\n" ;

    }
    else if ( n_ == 2 ){
        auto TestSize = [&](string &s1,string &s2){
         if ( s1.size() < s2.size() ){
            int sz = int( s2.size() - s1.size() ) ;
            for(int i = 1 ; i <= sz ; ++i)
                s1.insert(s1.begin(),'0');
        }
        else if ( s1.size() > s2.size() ){
            int sz = int( s1.size() - s2.size() ) ;
            for(int i = 1 ; i <= sz ; ++i)
                s2.insert(s2.begin(),'0');
            }
        };
        auto convert = [&](string s1){
            reverse(all(s1));
            int sz = s1.size() ;
            long long no = 0LL ;
            for(int i = 0 ; i < sz ; ++i){
                no+=( (1LL<<i)*(s1[i]-'0') ) ;
            }
            return no ;
        };
        auto converttostr = [&](long long no){
            string s = "" ;
            while(no){
                s.insert(s.begin(),( no%2LL +'0'));
                no/=2LL;
            }
            return s ;
        };
        long long n1 , n2 ;
        cout << "Enter first  decimal number: ";
        cin >> n1 ;
        cout << "Enter second decimal number: ";
        cin >> n2 ;
        auto two_sComplementInAdd = [&]( string &s ){
            int ind = s.find_last_of('1') ;
            for(int i = 0 ; i != ind ; ++i){
                s[i] = (!(s[i]-'0'))+'0';
            }
        };
        bool bf1 = 0 , bf2 = 0 , bsum = 0 ;
        if ( n1 < 0 )bf1 = 1 ;
        if ( n2 < 0 )bf2 = 1 ;
        if ( (n1+n2) < 0 )bsum = 1 ;
        string s1  = converttostr( abs(n1) ) ;
        string s2  = converttostr( abs(n2) ) ;
        string sum = converttostr( abs(n1+n2) ) ;
        TestSize(s1,s2) ;
        if (bf1)two_sComplementInAdd (s1);
        if (bf2)two_sComplementInAdd (s2);
        auto DisplayInSameSize = [&]( string &_ ){
            if(_.size() == s1.size())///since, s1.size()==s2.size(), doesn't matter s1 or s2
            return _ ;
            else if( _.size() < s1.size() ){
                int sz = int( s1.size() - _.size() ) ;
                for(int i = 1 ; i <= sz ; ++i)
                    _.insert(_.begin(),'0');
            }
            else if( _.size() > s1.size() ){
                int sz = int( _.size() - s1.size() ) ;
                for(int i = 1 ; i <= sz ; ++i)
                    _.insert(_.begin(),'0');
            }
            return _ ;
        };
        cout << n1 << " + " << n2 << " = " << n1+n2 << "\n" ;
        sum = DisplayInSameSize(sum) ;
        if (bsum)two_sComplementInAdd(sum);
        cout<< s1 << " + " << s2 << " = " << sum << "\n" ;
    }
        cout << "\n" << string(86,'-') << "\n";
}
int BasesMenu(){

    cout << "1) Binary\n";
    cout << "2) Decimal\n";
    cout << "3) Hexadecimal\n";
    cout << "4) Octal\n";
    cout << string(28,' ') << "Please choose from [1 ... 4] : ";
    int iChoice_ ; cin >> iChoice_ ;
    if ( cin.fail() ){
        cout << "\n" << string(33,' ') << string(4,'-') << "<< Wrong Input >>" << string(4,' -') << "\n" ;
        cin.clear();
        cin.ignore(10000,'\n');
        return BasesMenu();
    }
    else return iChoice_ ;
}

void basesConversions(){

    auto converttostr = [&](long long no){
            string s_ = "" ;
            while(no){
                s_.insert(s_.begin(),( no%2LL +'0'));
                no/=2LL;
            }
            return (s_ == "" ? "0" : s_ );
    };

    auto convert = [&](string s1_){
        reverse(all(s1_));
        int sz = s1_.size() ;
        long long no = 0LL ;
        for(long long i = 0 ; i < sz ; ++i){
            no+=(1LL<<i)*(s1_[i]-'0');
        }
        return no ;
    };

    auto converttodec_hex = [&](string hexa){
        reverse(all(hexa));
        int sz = (int)hexa.size();
        long long tmp = 0LL ;
        long long no_ = 0LL ;
        for(int i = 0 ; i < sz ; ++i){
            if ( hexa[i] >= 'a' && hexa[i] <= 'f' ){
                tmp = (hexa[i]-'a')+10;
            }
            else if ( hexa[i] >= 'A' && hexa[i] <= 'F' ){
                tmp = (hexa[i]-'A')+10;
            }
            else if ( hexa[i] >= '0' && hexa[i] <= '9' ){
                tmp = (hexa[i]-'0');
            }
            no_ += pow(16,i)*(tmp);
        }
        return no_ ;
    };

    auto testHex = [](string Hex_){
        string ValidValues = {"0123456789aAbBcCdDeEfFxX"};
        int sz = (int)Hex_.size();
        for( int i = 0 ; i < sz ; ++i){
            if ( find( all ( ValidValues ) , Hex_[i] ) == ValidValues.end()  ){
                cout << "Not allowed number\n";
                printf("value of Hexadecimal value in binary  : Not Valid\n");
                printf("value of Hexadecimal value in octal   : Not Valid\n");
                printf("value of Hexadecimal value in decimal : Not Valid\n");
                return 0 ;
            }
        }
    };

    auto testOct = [](string oct_){
        string ValidValues = {"01234567"};
        int sz = (int)oct_.size();
        for( int i = 0 ; i < sz ; ++i){
            if ( find( all ( ValidValues ) , oct_[i] ) == ValidValues.end()  ){
                cout << "You have to know that the most greater bit in octal representation doesn't exceed 7 \n";
                printf("value of octal value in binary     : Not Valid\n");
                printf("value of octal value in decimal    : Not Valid\n");
                printf("value of octal value in Hexadecimal: Not Valid\n");
                return 0 ;
            }
        }
    };

    auto converttodec_oct= [&](string oct){
        reverse(all(oct));
        int sz = (int)oct.size();
        long long tmp = 0LL ;
        long long no_ = 0LL ;
        testOct(oct);
        for(int i = 0 ; i < sz ; ++i){
            if ( oct[i] >= '0' && oct[i] <= '7' ){
                tmp = (oct[i]-'0');
            }
            no_ += pow(8,i)*(tmp);
        }
        return no_ ;
    };

    int n = BasesMenu();
    switch(n) {
    case 1:
        {
            cout << "\nEnter string binary value : " ;
            string s ; cin >> s ;
            long long no = convert(s) ;
            printf("value of binary value in decimal    : %d\n",no);
            printf("value of binary value in octal      : %o\n",no);
            printf("value of binary value in Hexadecimal: %X\n",no);
                            break;
        }
    case 2:
        {
            cout << "\nEnter decimal value : " ;
            long long no ;cin >> no ;
            string s = converttostr(no);
            printf("value of decimal value in binary     : %s\n",s.c_str());
            printf("value of decimal value in octal      : %o\n",no);
            printf("value of decimal value in Hexadecimal: %X\n",no);
                            break;
        }

    case 3:
        {
            cout << "\nEnter hexadecimal value : " ;
            string no ;cin>>no; ///Reading as Hexadecimal value
            if ( !testHex(no) ){
                break;
            }
            long long no_dec = converttodec_hex(no);
            string s = converttostr(no_dec);
            printf("value of decimal value in binary     : %s\n",s.c_str());
            printf("value of hexadecimal value in octal  : %o\n",no_dec);
            printf("value of hexadecimal value in decimal: %d\n",no_dec);
                            break;
        }

    case 4:
        {
            cout << "\nEnter octal value : " ;
            string no ;cin>>no; ///Reading as octal value
            if ( !testOct(no) ){
                break;
            }
            long long no_dec = converttodec_oct(no);
            string s = converttostr(no_dec);
            printf("value of octal value in binary      : %s\n",s.c_str());
            printf("value of octal value in hexadecimal : %X\n",no_dec);
            printf("value of octal value in decimal     : %d\n",no_dec);
                            break;
        }

    default: cout << "\nWrong Choice bases Conversions\n";

    }

}

void getBasesReady(){

    cout << "\n" << string(86,'-') << "\n";

    cout << "\n" << string(28,' ')
    <<string(4,'-')<<string(3,'<')<<" Bases Conversions " << string(3,'>') <<string(2,'-')
    <<string(15,' ')
    <<"\n\n";
    cout << string(28,' ') << "From any base you want to start \n\n";
    basesConversions() ;
    cout << "\n" << string(86,'-') << "\n";

}

void driveBasesConversions() {
    getBasesReady();
}
