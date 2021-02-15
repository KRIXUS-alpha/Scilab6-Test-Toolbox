// Copyright (C) 2019 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Kartikeya Sinha
// Email: ks9581@srmist.edu.in
extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include "trans.h"




static const char fname[] = "trans";
int sci_trans(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{

	int row1 = 0;
    	int col1 = 0;
    	int size1 = 0;
    	double* in1 = NULL;
    	double* out1 = NULL;
  
if (nin > 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 2);
        return 1;
    }
if (scilab_isDouble(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isComplex(env, in[0]) == 1)
    {
        Scierror(999, _("%s: Wrong type for input argument #%d: A scalar expected.\n"), fname, 1);
        return 1;
    }

if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    size1 = scilab_getDim2d(env, in[0], &row1, &col1);
    double ar[size1];

    scilab_getDoubleArray(env, in[0], &in1);


		trans(ar,in1, row1, col1);

    	out[0] = scilab_createDoubleMatrix2d(env, col1, row1, 0);
   	scilab_getDoubleArray(env, out[0], &out1);

	int n=0;
	
	for(n=0;n<size1;n++){
		out1[n] = ar[n];
			
	}
		
    return 0;
}
}
