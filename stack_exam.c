#include <stdio.h>
#include <stdlib.h>
typedef struct _element {
  struct _element *el;
  int int1;
} element;

typedef struct _data {
  element *first;
  element *last;
} data;

element *create_ele(int idx) {
  element *el = malloc(sizeof(element));
  el->int1 = idx;
  return el;
}

data *create_data() {
  data *mydata = malloc(sizeof(data));
  mydata->first = NULL;
  mydata->last = NULL;
  return mydata;
}

void print_data(data *my_data) {
  element *ele = my_data->first;
  printf("[");
  while (ele) {
    printf("%d", ele->int1);
    if (ele->el) {
      printf(",");
    }
    ele = ele->el;
  }
  printf("]\n");
}
int get(data *data1) {
  element *last = data1->last;
  element *ele = data1->first;
  ;
  int idx = -1;
  if (last == NULL) {
    return idx;
  }
  if (data1->first == data1->last && ele == data1->first) {
    data1->first = NULL;
    data1->last = NULL;
  }
  while (ele->el != last) {
    ele = ele->el;
  }
  data1->last = ele;
  ele->el = NULL;
  idx = last->int1;
  free(last);
  return idx;
};

void put(data *data1, int idx) {
  element *ele1 = create_ele(idx);
  ele1->el = data1->first;
  data1->first = ele1;
  if (data1->last == NULL) {
    data1->last = ele1;
  }
};

int main(int argc, char **args) {
  data *my_data = create_data();
  put(my_data, 12);
  put(my_data, 32);
  get(my_data);
  put(my_data, 28);
  put(my_data, 10);
  put(my_data, 12);
  print_data(my_data);
}
#include <stdlib.h>
typedef struct _element {
  struct _element *el;
  int int1;
} element;

typedef struct _data {
  element *first;
  element *last;
} data;

element *create_ele(int idx) {
  element *el = malloc(sizeof(element));
  el->int1 = idx;
  return el;
}

data *create_data() {
  data *mydata = malloc(sizeof(data));
  mydata->first = NULL;
  mydata->last = NULL;
  return mydata;
}

void print_data(data *my_data) {
  element *ele = my_data->first;
  printf("[");
  while (ele) {
    printf("%d", ele->int1);
    if (ele->el) {
      printf(",");
    }
    ele = ele->el;
  }
  printf("]\n");
}
int get(data *data1) {
  element *last = data1->last;
  element *ele = data1->first;
  ;
  int idx = -1;
  if (last == NULL) {
    return idx;
  }
  if (data1->first == data1->last && ele == data1->first) {
    data1->first = NULL;
    data1->last = NULL;
  }
  while (ele->el != last) {
    ele = ele->el;
  }
  data1->last = ele;
  ele->el = NULL;
  idx = last->int1;
  free(last);
  return idx;
};

void put(data *data1, int idx) {
  element *ele1 = create_ele(idx);
  ele1->el = data1->first;
  data1->first = ele1;
  if (data1->last == NULL) {
    data1->last = ele1;
  }
};

int main(int argc, char **args) {
  data *my_data = create_data();
  put(my_data, 12);
  put(my_data, 32);
  get(my_data);
  put(my_data, 28);
  put(my_data, 10);
  put(my_data, 12);
  print_data(my_data);
}
#include <stdlib.h>
typedef struct _element {
  struct _element *el;
  int int1;
} element;

typedef struct _data {
  element *first;
  element *last;
} data;

element *create_ele(int idx) {
  element *el = malloc(sizeof(element));
  el->int1 = idx;
  return el;
}

data *create_data() {
  data *mydata = malloc(sizeof(data));
  mydata->first = NULL;
  mydata->last = NULL;
  return mydata;
}

void print_data(data *my_data) {
  element *ele = my_data->first;
  printf("[");
  while (ele) {
    printf("%d", ele->int1);
    if (ele->el) {
      printf(",");
    }
    ele = ele->el;
  }
  printf("]\n");
}
int get(data *data1) {
  element *last = data1->last;
  element *ele = data1->first;
  ;
  int idx = -1;
  if (last == NULL) {
    return idx;
  }
  if (data1->first == data1->last && ele == data1->first) {
    data1->first = NULL;
    data1->last = NULL;
  }
  while (ele->el != last) {
    ele = ele->el;
  }
  data1->last = ele;
  ele->el = NULL;
  idx = last->int1;
  free(last);
  return idx;
};

void put(data *data1, int idx) {
  element *ele1 = create_ele(idx);
  ele1->el = data1->first;
  data1->first = ele1;
  if (data1->last == NULL) {
    data1->last = ele1;
  }
};

int main(int argc, char **args) {
  data *my_data = create_data();
  put(my_data, 12);
  put(my_data, 32);
  get(my_data);
  put(my_data, 28);
  put(my_data, 10);
  put(my_data, 12);
  print_data(my_data);
}
