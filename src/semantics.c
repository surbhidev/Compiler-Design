#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for symbol table
struct sym
{
    int sno;
    char token[100]; // stores name of variables and functions
    int type[100]; // stores data type tokens of variables/functions
    int paratype[100]; // stores parameter types for functions
    int tn; // no of tokens
    int pn; // no of parameters
    int scope; // scope of variable/function
}st[100]; // symbol table array

int n = 0, arr[10]; // n -> symbol count, arr -> return types for functions

// Find the highest scope for a given token and current scope
int returnscope(char *a, int cs)
{
    int i;
    int max = 0;
    for(i = 0; i < n; i++)
    {
        if(!strcmp(a, st[i].token) && cs >= st[i].scope)
        {
            if(st[i].scope >= max)
                max = st[i].scope;
        }
    }
    return max;
}

// Check if a variable exists in the symbol table
int lookup(char *a)
{
    for(int i = 0; i < n; i++)
    {
        if(!strcmp(a, st[i].token))
            return 0; // found
    }
    return 1; // not found
}

// Return the data type of a given variable in a specific scope
int returntype(char *a, int sct)
{
    for(int i = 0; i < n; i++)
    {
        if(!strcmp(a, st[i].token) && st[i].scope == sct)
            return st[i].type[0];
    }
    return -1; // not found
}

// Insert a scope for a token
void insertscope(char *a, int s)
{
    for(int i = 0; i < n; i++)
    {
        if(!strcmp(a, st[i].token))
        {
            st[i].scope = s;
            break;
        }
    }
}

// Return the return type of a function
int returntypef(char *a)
{
    for(int i = 0; i < n; i++)
    {
        if(!strcmp(a, st[i].token))
            return st[i].type[1]; // return type at index 1
    }
    return -1; // not found
}

// Insert a new variable/function into the symbol table
void insert(char *name, int type)
{
    if(lookup(name)) // if variable not found, insert new entry
    {
        strcpy(st[n].token, name);
        st[n].tn = 1;
        st[n].pn = 0;
        st[n].type[st[n].tn - 1] = type;
        st[n].sno = n + 1;
        n++;
    }
    else // update existing variable
    {
        for(int i = 0; i < n; i++)
        {
            if(!strcmp(name, st[i].token))
            {
                st[i].tn++;
                st[i].type[st[i].tn - 1] = type;
                break;
            }
        }
    }
}

// Store the return type for a function in the array
void storereturn(int ct, int returntype)
{
    arr[ct] = returntype;
}

// Insert a duplicate variable with a specific scope
void insert_dup(char *name, int type, int s_c)
{
    strcpy(st[n].token, name);
    st[n].tn = 1;
    st[n].pn = 0;
    st[n].type[st[n].tn - 1] = type;
    st[n].sno = n + 1;
    st[n].scope = s_c;
    n++;
}

// Insert function parameters
void insertp(char *name, int type)
{
    for(int i = 0; i < n; i++)
    {
        if(!strcmp(name, st[i].token))
        {
            st[i].pn++;
            st[i].paratype[st[i].pn - 1] = type;
            break;
        }
    }
}

// Check parameter data types in function calls
int checkp(char *name, int flist, int c)
{
    for(int i = 0; i < n; i++)
    {
        if(!strcmp(name, st[i].token))
        {
            if(st[i].paratype[c] != flist)
                return 1; // mismatch
        }
    }
    return 0; // match
}

// Display the symbol table
void display()
{
    printf("\nIdentifier\tType\t\tParameter Type\n");
    for(int i = 0; i < n; i++)
    {
        printf("%s\t", st[i].token);
        for(int j = 0; j < st[i].tn; j++)
        {
            switch(st[i].type[j])
            {
                case 258: printf("INT"); break;
                case 259: printf("FLOAT"); break;
                case 260: printf("VOID"); break;
                case 271: printf("FUNCTION"); break;
            }
            if(st[i].tn > 1 && j < st[i].tn - 1)
                printf(" - ");
        }
        printf("\t\t");
        for(int j = 0; j < st[i].pn; j++)
        {
            switch(st[i].paratype[j])
            {
                case 258: printf("INT"); break;
                case 259: printf("FLOAT"); break;
            }
            if(st[i].pn > 1 && j < st[i].pn - 1)
                printf(", ");
        }
        printf("\n");
    }
}
