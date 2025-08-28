 #include<iostream>
  using namespace std;
  class Rectangle{          //rectangle{  all are encapsulated}
    
  private:
  int length,breadth;

  public:

  //setters
  void setLength(int len){
      length=len;
  }
  void setBreadth(int bre){
  breadth=bre; 
  }

  //getters
  int getLength(){
      return length;                              //these datahiding            
  }

  int getBreadth(){
      return breadth;
  }

  int area(){
  return length*breadth;
  }


  };
   int main()
  {
      Rectangle rectObj;

      rectObj.setLength(20);
      rectObj.setBreadth(30); 
      // rectObj.length=29;
      // rectObj.breadth=40;

        cout <<"the length is :" <<rectObj.getLength() <<endl;
        cout <<"the breadth is :" <<rectObj.getBreadth()<<endl;

      // cout <<"the length is :" <<rectObj.length <<endl;
      // cout <<"the breadth is :" <<rectObj.breadth<<endl;
      //  cout <<"the area of Rectangle is:" << rectObj.length*rectObj.breadth <<endl;

       cout <<"the area of Rectangle is:" << rectObj.area() <<endl;

  return 0;
  }
