#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Task{
	string description;
	bool completed;
	Task(string desc):
             description(desc),completed(false){}
};

void addTasks(vector<Task>& tasks);
void viewTasks(const vector<Task>& tasks);
void markTaskCompleted(vector<Task>& tasks);
void removeTask(vector<Task>& tasks);

int main(){
	vector<Task> tasks;
	int choice;
	
	do{
		cout<<"1.Add Task\n";
		cout<<"2.View Task\n";
		cout<<"3.Mark Task\n";
		cout<<"4.remove Task\n";
		cout<<"5.Exit\n";
		cout<<"Enter your Choice:-";
		cin>>choice;
		cin.ignore();
		
		switch(choice){
			case 1:
				addTasks(tasks);
				break;
		             case 2:
				viewTasks(tasks);
				break;
			case 3:
				markTaskCompleted(tasks);
				break;
			case 4:
				removeTask(tasks);
				break;
			case 5:
				cout<<"Exiting.....\n";
				break;
			default:
				cout<<"Invalid choice.Please try again.\n";
		}
		
	}
	while(choice!=5);
	return 0;
}
void addTasks(vector<Task>& tasks){
	string description;
	cout<<"Enter task description:-";
	getline(cin, description);
	tasks.push_back(Task(description));
	cout<<"Task added Successfully.\n";
}

void viewTasks(const vector<Task>& tasks){
	if(tasks.empty()){
		cout<<"No tasks to display.\n";
		return ;
	}
	cout<<"\nTask:\n";
	for(size_t i=0;i<tasks.size();++i){
		cout<<i+1<<"."<<tasks[i].description<<"["<<(tasks[i].completed?"Completed":"Pending")<<"]\n";

	}
}

void markTaskCompleted(vector<Task>& tasks){
	if(tasks.empty()){
		cout<<"No task to mark as completed.\n";
		return;
	}
	int taskNumber;
	cout<<"Enetr task number to mark as completed:";
	cin>>taskNumber;
	cin.ignore();
	if(taskNumber<1||taskNumber>tasks.size()){
		cout<<"Invalid task number.\n";
	}
	else{
		tasks[taskNumber-1].completed=true;
		cout<<"Task marked as completed.\n";
	}
	
}

void removeTask(vector<Task>& tasks){
	if(tasks.empty()){
		cout<<"No tasks to remove.\n";
		return;
	}
	int taskNumber;
	cout<<"Enetr task number to remove:";
	cin>>taskNumber;
	cin.ignore();
	if(taskNumber<1||taskNumber>tasks.size()){
		cout<<"Invalid task number.\n";
	}
	else{
		tasks.erase(tasks.begin()+taskNumber-1);
		cout<<"Task removed successfully.\n";
		
	}
	
}	



