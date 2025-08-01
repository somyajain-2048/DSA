Node* slow = head;
Node* fast = head;

while(fast && fast->next){
	slow = slow->next;
	fast= fast->next->next;

	if(slow == fast){
	   break;
	}

}

if(fast == NULL || fast->next == NULL)
return 0;

int cnt = 1;
skow = fast->next;

while(slow != fast){
	cnt++;
	slow = slow->next;
}
return cnt;
