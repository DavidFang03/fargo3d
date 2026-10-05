#define MPI_COMM_WORLD 0
#define MPI_IN_PLACE 0
#define MPI_DOUBLE 2
#define MPI_FLOAT 4
#define MPI_CHAR 1
#define MPI_LONG 3
#define MPI_INT 0
#define MPI_MIN 0
#define MPI_MAX 0
#define MPI_SUM 0

#define MPI_STATUS_IGNORE 0

typedef int MPI_Request;
typedef int MPI_Status;
typedef int MPI_Comm;
typedef long MPI_Offset;

void MPI_Comm_rank(int a, int *b);
void MPI_Barrier(void);
void MPI_Comm_size(int a, int *b);
void MPI_Scan(void);
void MPI_Comm_split(void);
void MPI_Init(int *argc, char **argv[]);
void MPI_Finalize(void);
void MPI_Bcast(void);
void MPI_Isend(void);
void MPI_Irecv(void);
void MPI_Allreduce(void *ptr, void *ptr2, int count, int type, int foo3,
                   int foo4);
void MPI_Reduce(void *ptr, void *ptr2, int count, int type, int foo3, int foo4,
                int foo5);
void MPI_Send(void);
void MPI_Recv(void);
void MPI_Wait(void);
void MPI_Gather(void *s, int n, int type, void *r, int m, int type2, int root,
                int foo);