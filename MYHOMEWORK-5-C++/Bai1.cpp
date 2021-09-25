#include <iostream>
#include <vector> //for vector
using namespace std;

int main()
{cout<<"\n\n";
    
  // khai bao vecto
    vector<int> vec;

    // them vao mang phan tu 12 ba lan
    vec.assign(3, 12); 

    //them vao cuoi mang cac phan tu 
    vec.push_back(11);
    vec.push_back(22);
    for(int i=0; i<10; i++)
        vec.push_back(i);
    
    //xoa mot phan tu o cuoi
    vec.pop_back();

    //them mot phan tu vao gan dau va vao gan cuoi
    vec.insert(vec.begin()+1, 10);
    vec.insert(vec.end()-1, 13);

    //xoa phan tu thu ba
    vec.erase(vec.begin()+2);

    //loai bo tat ca phan tu trong vector
    //vec.erase();

    //kich co mang
    int s=vec.size();

   
   //in mang ra man hinh
   //cach 1: dung iterator
    cout << "The vector elements are: "<<endl;
    for (int i = 0; i< s; i++) 
        cout << vec[i] << " "; 
    cout<<endl;

    //cach 2: dung con tro
    vector <int> :: iterator it;
    for(it= vec.begin(); it!= vec.end(); it++)
        cout<< *it<<" ";
    cout<<endl;

    //duyet nguoc lai mang
    //cach 1
    for(int i=s-1; i>=0; i--)
        cout<< vec[i] <<" ";
    cout<<endl;

    //cach 2
    vector <int> :: reverse_iterator rit; 
    for(rit = vec.rbegin(); rit!= vec.rend(); rit++) 
        cout << *rit <<" "; 
    cout<<endl;
  
    cout<<"\n\n";
    return 0;
}
