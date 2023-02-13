void sort012(int *arr, int n)
{
  int c0=0, c1=0, c2=0, i=0;

  for(int i=0; i<n; i++){
     if(arr[i]==0) c0++;
     if(arr[i]==1) c1++;
     if(arr[i]==2) c2++;
  }

  while (c0 > 0) {
    arr[i] = 0;
    i++;
    c0--;
  }

    while (c1 > 0) {
    arr[i] = 1;
    i++;
    c1--;
  }

    while (c2 > 0) {
    arr[i] = 2;
    i++;
    c2--;
  }
}
