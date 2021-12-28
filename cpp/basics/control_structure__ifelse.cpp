            //   control structure is of 3 type
            //   sequence structure------------------simple
            //   decision structure-------------if else switch
            //   loop structure ----------------for while

            #include<iostream>
            using namespace std;
            
            int main(){
            
                // else if ladderr
                int a ;
                cout<<"enter the age"<<endl;
                cin>>a;
int girlfriend;
 cout<<"enter the ni of the gf"<<endl;
cin>>girlfriend;
                if(a<18 && a>1)
                {
                    cout<<"your are stil a kid "<<endl;
                }
            
               else if(a>30 && a<120)
                {
                    cout<<"your are old for that "<<endl;
                }
            
               else if(a<1)
                {
                    cout<<"you are not born "<<endl;
                }
               else if(a>120)
                {
                    cout<<"you are not human who you are "<<endl;
                }
            
                else
                {
                    cout<<"your are ready to go my boy "<<endl;
                }
            
            
            

            // switch control statement

            switch (girlfriend)
            {
            case 1:
            cout<<"you ARE A  true lover";
                          
                break;
            
            case 2:
            cout<<"you ARE A lover + backup";
                          
                break;
            
            case 3:
            cout<<"you ARE A  playboy";
                          
                break;
            
            default:
            cout<<"you are motherfucker  ";
                break;
            }

return 0;
            
           
            }
            