Suppose you have two functions S(n) and T(n). Suppose that S(n) has runtime
of g(n), while T(n) has runtime of f(n) If you call them one after
 the other like this:

...
S(n);
T(n);
...
the runtime of the code above will be max(g(n),f(n));

int silly(const String& s){

	for(int i=0;i<s.size();i++){
		rc += s[i];
	}
	return rc;
}


int silly(const char* s){
	int len=strlen(s);
	int rc;
	for(int i=0;i<len;i++)
		rc += s[i];
	}
	return rc;
}
int silly(const char* s){
	int rc;
	for(int i=0;s[i]!='\0';i++)
		rc += s[i];
	}
	return rc;
}
int silly(const char* s){
	int rc;
	for(int i=0;i<strlen(s);i++)
		rc += s[i];
	}
	return rc;
}