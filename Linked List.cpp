//My first linked list example
#include <iostream>
#include <iomanip>
using namespace std;


struct Student{
int id;
string name;
int score;
Student * next;
};
int main() {
int length;
  int idList[]=
  {1005,1006,1007,1008,1010,2000,3456,4320};
  
  string nameList[]={"Alice","Tom","Bob","David","Marry","Nuno","Eva","Zack"};
  
  int scoreList[]=
  {95,85,90,75,55,78,90,98};
  
  length=sizeof(idList)/sizeof(idList[0]);
  Student student, *head,*curr,*prev,*temp;
  for(int i=0; i<length;i++){
    temp = new Student;
    if(i==0) head=temp;
    else curr->next=temp;
    temp->id=idList[i];
    temp->name=nameList[i];
    temp->score=scoreList[i];
    temp->next=NULL;
    curr=temp;
  }
  cout<<"\nData From Linked List\n";
  curr=head;
  cout<<left<<setw(10)<<"ID"<<setw(10)<<"Name"<<setw(10)<<right<<"Score"<<endl;
  while(curr != NULL){
    cout<<left<<setw(10)<<(*curr).id<<setw(10);
    cout<<(*curr).name<<setw(10);
    cout<<right<<curr->score<<endl;
    curr=(*curr).next;
  }
}