#define ROW_SZ 4; 

void transform_into_identity_matrix( double *m ); 
void MxM( double *helper_matrix, double *m1, double *m2 ); 
void printM( double *m, char *custom_message ); 
void mxp(punto *pptr, double m[16], punto p);
void mxv(punto *pptr, double m[16], punto v);
void MxV( double *pptr, double *m, double  *v );

double dot( double *v1,  double *v2 );
void normalize( double *v1 );
void vector_product( double *saving_v, double *v1, double *v2 );
void calculate_triangle_normal( double *saving_vector, hiruki *triangle ); 
