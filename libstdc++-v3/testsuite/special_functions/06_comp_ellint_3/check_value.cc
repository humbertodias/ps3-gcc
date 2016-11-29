// { dg-do run { target c++11 } }
// { dg-options "-D__STDCPP_WANT_MATH_SPEC_FUNCS__" }
//
// Copyright (C) 2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

//  comp_ellint_3
//  Compare against values generated by the GNU Scientific Library.
//  The GSL can be found on the web: http://www.gnu.org/software/gsl/
#include <limits>
#include <cmath>
#if defined(__TEST_DEBUG)
#  include <iostream>
#  define VERIFY(A) \
  if (!(A)) \
    { \
      std::cout << "line " << __LINE__ \
	<< "  max_abs_frac = " << max_abs_frac \
	<< std::endl; \
    }
#else
#  include <testsuite_hooks.h>
#endif
#include <specfun_testcase.h>


// Test data for k=-0.90000000000000002.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 2.6751587294384150e-16
const testcase_comp_ellint_3<double>
data001[10] =
{
  { 2.2805491384227703, -0.90000000000000002, 0.0000000000000000 },
  { 2.1537868513875287, -0.90000000000000002, 0.10000000000000001 },
  { 2.0443194576468890, -0.90000000000000002, 0.20000000000000001 },
  { 1.9486280260314426, -0.90000000000000002, 0.29999999999999999 },
  { 1.8641114227238349, -0.90000000000000002, 0.40000000000000002 },
  { 1.7888013241937861, -0.90000000000000002, 0.50000000000000000 },
  { 1.7211781128919523, -0.90000000000000002, 0.59999999999999998 },
  { 1.6600480747670940, -0.90000000000000002, 0.69999999999999996 },
  { 1.6044591960982202, -0.90000000000000002, 0.80000000000000004 },
  { 1.5536420236310946, -0.90000000000000002, 0.90000000000000002 },
};
const double toler001 = 2.5000000000000020e-13;

// Test data for k=-0.80000000000000004.
// max(|f - f_GSL|): 2.2204460492503131e-16
// max(|f - f_GSL| / |f_GSL|): 1.5960830388244336e-16
const testcase_comp_ellint_3<double>
data002[10] =
{
  { 1.9953027776647296, -0.80000000000000004, 0.0000000000000000 },
  { 1.8910755418379521, -0.80000000000000004, 0.10000000000000001 },
  { 1.8007226661734588, -0.80000000000000004, 0.20000000000000001 },
  { 1.7214611048717301, -0.80000000000000004, 0.29999999999999999 },
  { 1.6512267838651289, -0.80000000000000004, 0.40000000000000002 },
  { 1.5884528947755532, -0.80000000000000004, 0.50000000000000000 },
  { 1.5319262547427865, -0.80000000000000004, 0.59999999999999998 },
  { 1.4806912324625332, -0.80000000000000004, 0.69999999999999996 },
  { 1.4339837018309471, -0.80000000000000004, 0.80000000000000004 },
  { 1.3911845406776222, -0.80000000000000004, 0.90000000000000002 },
};
const double toler002 = 2.5000000000000020e-13;

// Test data for k=-0.69999999999999996.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.3074070916136724e-16
const testcase_comp_ellint_3<double>
data003[10] =
{
  { 1.8456939983747236, -0.69999999999999996, 0.0000000000000000 },
  { 1.7528050171757608, -0.69999999999999996, 0.10000000000000001 },
  { 1.6721098780092145, -0.69999999999999996, 0.20000000000000001 },
  { 1.6011813647733213, -0.69999999999999996, 0.29999999999999999 },
  { 1.5382162002954762, -0.69999999999999996, 0.40000000000000002 },
  { 1.4818433192178544, -0.69999999999999996, 0.50000000000000000 },
  { 1.4309994736080540, -0.69999999999999996, 0.59999999999999998 },
  { 1.3848459188329196, -0.69999999999999996, 0.69999999999999996 },
  { 1.3427110650397531, -0.69999999999999996, 0.80000000000000004 },
  { 1.3040500499695913, -0.69999999999999996, 0.90000000000000002 },
};
const double toler003 = 2.5000000000000020e-13;

// Test data for k=-0.59999999999999998.
// max(|f - f_GSL|): 6.6613381477509392e-16
// max(|f - f_GSL| / |f_GSL|): 4.1891472451898755e-16
const testcase_comp_ellint_3<double>
data004[10] =
{
  { 1.7507538029157526, -0.59999999999999998, 0.0000000000000000 },
  { 1.6648615773343014, -0.59999999999999998, 0.10000000000000001 },
  { 1.5901418016279374, -0.59999999999999998, 0.20000000000000001 },
  { 1.5243814243493585, -0.59999999999999998, 0.29999999999999999 },
  { 1.4659345278069984, -0.59999999999999998, 0.40000000000000002 },
  { 1.4135484285693078, -0.59999999999999998, 0.50000000000000000 },
  { 1.3662507535812816, -0.59999999999999998, 0.59999999999999998 },
  { 1.3232737468822813, -0.59999999999999998, 0.69999999999999996 },
  { 1.2840021261752192, -0.59999999999999998, 0.80000000000000004 },
  { 1.2479362973851875, -0.59999999999999998, 0.90000000000000002 },
};
const double toler004 = 2.5000000000000020e-13;

// Test data for k=-0.50000000000000000.
// max(|f - f_GSL|): 2.2204460492503131e-16
// max(|f - f_GSL| / |f_GSL|): 1.7857620325589816e-16
const testcase_comp_ellint_3<double>
data005[10] =
{
  { 1.6857503548125963, -0.50000000000000000, 0.0000000000000000 },
  { 1.6045524936084892, -0.50000000000000000, 0.10000000000000001 },
  { 1.5338490483665983, -0.50000000000000000, 0.20000000000000001 },
  { 1.4715681939859637, -0.50000000000000000, 0.29999999999999999 },
  { 1.4161679518465340, -0.50000000000000000, 0.40000000000000002 },
  { 1.3664739530045971, -0.50000000000000000, 0.50000000000000000 },
  { 1.3215740290190876, -0.50000000000000000, 0.59999999999999998 },
  { 1.2807475181182502, -0.50000000000000000, 0.69999999999999996 },
  { 1.2434165408189539, -0.50000000000000000, 0.80000000000000004 },
  { 1.2091116095504744, -0.50000000000000000, 0.90000000000000002 },
};
const double toler005 = 2.5000000000000020e-13;

// Test data for k=-0.40000000000000002.
// max(|f - f_GSL|): 8.8817841970012523e-16
// max(|f - f_GSL| / |f_GSL|): 6.1925080711125793e-16
const testcase_comp_ellint_3<double>
data006[10] =
{
  { 1.6399998658645112, -0.40000000000000002, 0.0000000000000000 },
  { 1.5620566886683604, -0.40000000000000002, 0.10000000000000001 },
  { 1.4941414344266770, -0.40000000000000002, 0.20000000000000001 },
  { 1.4342789859950078, -0.40000000000000002, 0.29999999999999999 },
  { 1.3809986210732901, -0.40000000000000002, 0.40000000000000002 },
  { 1.3331797176377398, -0.40000000000000002, 0.50000000000000000 },
  { 1.2899514672527024, -0.40000000000000002, 0.59999999999999998 },
  { 1.2506255923253344, -0.40000000000000002, 0.69999999999999996 },
  { 1.2146499565727209, -0.40000000000000002, 0.80000000000000004 },
  { 1.1815758115929846, -0.40000000000000002, 0.90000000000000002 },
};
const double toler006 = 2.5000000000000020e-13;

// Test data for k=-0.30000000000000004.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.8209844149902043e-16
const testcase_comp_ellint_3<double>
data007[10] =
{
  { 1.6080486199305128, -0.30000000000000004, 0.0000000000000000 },
  { 1.5323534693557528, -0.30000000000000004, 0.10000000000000001 },
  { 1.4663658145259877, -0.30000000000000004, 0.20000000000000001 },
  { 1.4081767433479091, -0.30000000000000004, 0.29999999999999999 },
  { 1.3563643538969763, -0.30000000000000004, 0.40000000000000002 },
  { 1.3098448759814962, -0.30000000000000004, 0.50000000000000000 },
  { 1.2677758800420669, -0.30000000000000004, 0.59999999999999998 },
  { 1.2294913236274982, -0.30000000000000004, 0.69999999999999996 },
  { 1.1944567571590048, -0.30000000000000004, 0.80000000000000004 },
  { 1.1622376896064914, -0.30000000000000004, 0.90000000000000002 },
};
const double toler007 = 2.5000000000000020e-13;

// Test data for k=-0.19999999999999996.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.8637687241174905e-16
const testcase_comp_ellint_3<double>
data008[10] =
{
  { 1.5868678474541660, -0.19999999999999996, 0.0000000000000000 },
  { 1.5126513474261087, -0.19999999999999996, 0.10000000000000001 },
  { 1.4479323932249564, -0.19999999999999996, 0.20000000000000001 },
  { 1.3908453514752477, -0.19999999999999996, 0.29999999999999999 },
  { 1.3400002519661005, -0.19999999999999996, 0.40000000000000002 },
  { 1.2943374404397372, -0.19999999999999996, 0.50000000000000000 },
  { 1.2530330675914556, -0.19999999999999996, 0.59999999999999998 },
  { 1.2154356555075863, -0.19999999999999996, 0.69999999999999996 },
  { 1.1810223448909909, -0.19999999999999996, 0.80000000000000004 },
  { 1.1493679916141861, -0.19999999999999996, 0.90000000000000002 },
};
const double toler008 = 2.5000000000000020e-13;

// Test data for k=-0.099999999999999978.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.8887517676790089e-16
const testcase_comp_ellint_3<double>
data009[10] =
{
  { 1.5747455615173562, -0.099999999999999978, 0.0000000000000000 },
  { 1.5013711111199950, -0.099999999999999978, 0.10000000000000001 },
  { 1.4373749386463430, -0.099999999999999978, 0.20000000000000001 },
  { 1.3809159606704959, -0.099999999999999978, 0.29999999999999999 },
  { 1.3306223265207477, -0.099999999999999978, 0.40000000000000002 },
  { 1.2854480708580160, -0.099999999999999978, 0.50000000000000000 },
  { 1.2445798942989255, -0.099999999999999978, 0.59999999999999998 },
  { 1.2073745911083185, -0.099999999999999978, 0.69999999999999996 },
  { 1.1733158866987732, -0.099999999999999978, 0.80000000000000004 },
  { 1.1419839485283374, -0.099999999999999978, 0.90000000000000002 },
};
const double toler009 = 2.5000000000000020e-13;

// Test data for k=0.0000000000000000.
// max(|f - f_GSL|): 2.2204460492503131e-16
// max(|f - f_GSL| / |f_GSL|): 1.6725702444488137e-16
const testcase_comp_ellint_3<double>
data010[10] =
{
  { 1.5707963267948966, 0.0000000000000000, 0.0000000000000000 },
  { 1.4976955329233277, 0.0000000000000000, 0.10000000000000001 },
  { 1.4339343023863691, 0.0000000000000000, 0.20000000000000001 },
  { 1.3776795151134889, 0.0000000000000000, 0.29999999999999999 },
  { 1.3275651989026320, 0.0000000000000000, 0.40000000000000002 },
  { 1.2825498301618641, 0.0000000000000000, 0.50000000000000000 },
  { 1.2418235332245127, 0.0000000000000000, 0.59999999999999998 },
  { 1.2047457872617382, 0.0000000000000000, 0.69999999999999996 },
  { 1.1708024551734544, 0.0000000000000000, 0.80000000000000004 },
  { 1.1395754288497419, 0.0000000000000000, 0.90000000000000002 },
};
const double toler010 = 2.5000000000000020e-13;

// Test data for k=0.10000000000000009.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.8887517676790089e-16
const testcase_comp_ellint_3<double>
data011[10] =
{
  { 1.5747455615173562, 0.10000000000000009, 0.0000000000000000 },
  { 1.5013711111199950, 0.10000000000000009, 0.10000000000000001 },
  { 1.4373749386463430, 0.10000000000000009, 0.20000000000000001 },
  { 1.3809159606704959, 0.10000000000000009, 0.29999999999999999 },
  { 1.3306223265207477, 0.10000000000000009, 0.40000000000000002 },
  { 1.2854480708580160, 0.10000000000000009, 0.50000000000000000 },
  { 1.2445798942989255, 0.10000000000000009, 0.59999999999999998 },
  { 1.2073745911083185, 0.10000000000000009, 0.69999999999999996 },
  { 1.1733158866987732, 0.10000000000000009, 0.80000000000000004 },
  { 1.1419839485283374, 0.10000000000000009, 0.90000000000000002 },
};
const double toler011 = 2.5000000000000020e-13;

// Test data for k=0.19999999999999996.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.8637687241174905e-16
const testcase_comp_ellint_3<double>
data012[10] =
{
  { 1.5868678474541660, 0.19999999999999996, 0.0000000000000000 },
  { 1.5126513474261087, 0.19999999999999996, 0.10000000000000001 },
  { 1.4479323932249564, 0.19999999999999996, 0.20000000000000001 },
  { 1.3908453514752477, 0.19999999999999996, 0.29999999999999999 },
  { 1.3400002519661005, 0.19999999999999996, 0.40000000000000002 },
  { 1.2943374404397372, 0.19999999999999996, 0.50000000000000000 },
  { 1.2530330675914556, 0.19999999999999996, 0.59999999999999998 },
  { 1.2154356555075863, 0.19999999999999996, 0.69999999999999996 },
  { 1.1810223448909909, 0.19999999999999996, 0.80000000000000004 },
  { 1.1493679916141861, 0.19999999999999996, 0.90000000000000002 },
};
const double toler012 = 2.5000000000000020e-13;

// Test data for k=0.30000000000000004.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.8209844149902043e-16
const testcase_comp_ellint_3<double>
data013[10] =
{
  { 1.6080486199305128, 0.30000000000000004, 0.0000000000000000 },
  { 1.5323534693557528, 0.30000000000000004, 0.10000000000000001 },
  { 1.4663658145259877, 0.30000000000000004, 0.20000000000000001 },
  { 1.4081767433479091, 0.30000000000000004, 0.29999999999999999 },
  { 1.3563643538969763, 0.30000000000000004, 0.40000000000000002 },
  { 1.3098448759814962, 0.30000000000000004, 0.50000000000000000 },
  { 1.2677758800420669, 0.30000000000000004, 0.59999999999999998 },
  { 1.2294913236274982, 0.30000000000000004, 0.69999999999999996 },
  { 1.1944567571590048, 0.30000000000000004, 0.80000000000000004 },
  { 1.1622376896064914, 0.30000000000000004, 0.90000000000000002 },
};
const double toler013 = 2.5000000000000020e-13;

// Test data for k=0.39999999999999991.
// max(|f - f_GSL|): 8.8817841970012523e-16
// max(|f - f_GSL| / |f_GSL|): 6.1925080711125793e-16
const testcase_comp_ellint_3<double>
data014[10] =
{
  { 1.6399998658645112, 0.39999999999999991, 0.0000000000000000 },
  { 1.5620566886683604, 0.39999999999999991, 0.10000000000000001 },
  { 1.4941414344266770, 0.39999999999999991, 0.20000000000000001 },
  { 1.4342789859950078, 0.39999999999999991, 0.29999999999999999 },
  { 1.3809986210732901, 0.39999999999999991, 0.40000000000000002 },
  { 1.3331797176377398, 0.39999999999999991, 0.50000000000000000 },
  { 1.2899514672527024, 0.39999999999999991, 0.59999999999999998 },
  { 1.2506255923253344, 0.39999999999999991, 0.69999999999999996 },
  { 1.2146499565727209, 0.39999999999999991, 0.80000000000000004 },
  { 1.1815758115929846, 0.39999999999999991, 0.90000000000000002 },
};
const double toler014 = 2.5000000000000020e-13;

// Test data for k=0.50000000000000000.
// max(|f - f_GSL|): 2.2204460492503131e-16
// max(|f - f_GSL| / |f_GSL|): 1.7857620325589816e-16
const testcase_comp_ellint_3<double>
data015[10] =
{
  { 1.6857503548125963, 0.50000000000000000, 0.0000000000000000 },
  { 1.6045524936084892, 0.50000000000000000, 0.10000000000000001 },
  { 1.5338490483665983, 0.50000000000000000, 0.20000000000000001 },
  { 1.4715681939859637, 0.50000000000000000, 0.29999999999999999 },
  { 1.4161679518465340, 0.50000000000000000, 0.40000000000000002 },
  { 1.3664739530045971, 0.50000000000000000, 0.50000000000000000 },
  { 1.3215740290190876, 0.50000000000000000, 0.59999999999999998 },
  { 1.2807475181182502, 0.50000000000000000, 0.69999999999999996 },
  { 1.2434165408189539, 0.50000000000000000, 0.80000000000000004 },
  { 1.2091116095504744, 0.50000000000000000, 0.90000000000000002 },
};
const double toler015 = 2.5000000000000020e-13;

// Test data for k=0.60000000000000009.
// max(|f - f_GSL|): 6.6613381477509392e-16
// max(|f - f_GSL| / |f_GSL|): 4.7124937590522226e-16
const testcase_comp_ellint_3<double>
data016[10] =
{
  { 1.7507538029157526, 0.60000000000000009, 0.0000000000000000 },
  { 1.6648615773343014, 0.60000000000000009, 0.10000000000000001 },
  { 1.5901418016279374, 0.60000000000000009, 0.20000000000000001 },
  { 1.5243814243493585, 0.60000000000000009, 0.29999999999999999 },
  { 1.4659345278069984, 0.60000000000000009, 0.40000000000000002 },
  { 1.4135484285693078, 0.60000000000000009, 0.50000000000000000 },
  { 1.3662507535812816, 0.60000000000000009, 0.59999999999999998 },
  { 1.3232737468822813, 0.60000000000000009, 0.69999999999999996 },
  { 1.2840021261752192, 0.60000000000000009, 0.80000000000000004 },
  { 1.2479362973851873, 0.60000000000000009, 0.90000000000000002 },
};
const double toler016 = 2.5000000000000020e-13;

// Test data for k=0.69999999999999996.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 3.3074070916136724e-16
const testcase_comp_ellint_3<double>
data017[10] =
{
  { 1.8456939983747236, 0.69999999999999996, 0.0000000000000000 },
  { 1.7528050171757608, 0.69999999999999996, 0.10000000000000001 },
  { 1.6721098780092145, 0.69999999999999996, 0.20000000000000001 },
  { 1.6011813647733213, 0.69999999999999996, 0.29999999999999999 },
  { 1.5382162002954762, 0.69999999999999996, 0.40000000000000002 },
  { 1.4818433192178544, 0.69999999999999996, 0.50000000000000000 },
  { 1.4309994736080540, 0.69999999999999996, 0.59999999999999998 },
  { 1.3848459188329196, 0.69999999999999996, 0.69999999999999996 },
  { 1.3427110650397531, 0.69999999999999996, 0.80000000000000004 },
  { 1.3040500499695913, 0.69999999999999996, 0.90000000000000002 },
};
const double toler017 = 2.5000000000000020e-13;

// Test data for k=0.80000000000000004.
// max(|f - f_GSL|): 2.2204460492503131e-16
// max(|f - f_GSL| / |f_GSL|): 1.5960830388244336e-16
const testcase_comp_ellint_3<double>
data018[10] =
{
  { 1.9953027776647296, 0.80000000000000004, 0.0000000000000000 },
  { 1.8910755418379521, 0.80000000000000004, 0.10000000000000001 },
  { 1.8007226661734588, 0.80000000000000004, 0.20000000000000001 },
  { 1.7214611048717301, 0.80000000000000004, 0.29999999999999999 },
  { 1.6512267838651289, 0.80000000000000004, 0.40000000000000002 },
  { 1.5884528947755532, 0.80000000000000004, 0.50000000000000000 },
  { 1.5319262547427865, 0.80000000000000004, 0.59999999999999998 },
  { 1.4806912324625332, 0.80000000000000004, 0.69999999999999996 },
  { 1.4339837018309471, 0.80000000000000004, 0.80000000000000004 },
  { 1.3911845406776222, 0.80000000000000004, 0.90000000000000002 },
};
const double toler018 = 2.5000000000000020e-13;

// Test data for k=0.89999999999999991.
// max(|f - f_GSL|): 4.4408920985006262e-16
// max(|f - f_GSL| / |f_GSL|): 2.6751587294384150e-16
const testcase_comp_ellint_3<double>
data019[10] =
{
  { 2.2805491384227703, 0.89999999999999991, 0.0000000000000000 },
  { 2.1537868513875287, 0.89999999999999991, 0.10000000000000001 },
  { 2.0443194576468895, 0.89999999999999991, 0.20000000000000001 },
  { 1.9486280260314426, 0.89999999999999991, 0.29999999999999999 },
  { 1.8641114227238351, 0.89999999999999991, 0.40000000000000002 },
  { 1.7888013241937863, 0.89999999999999991, 0.50000000000000000 },
  { 1.7211781128919525, 0.89999999999999991, 0.59999999999999998 },
  { 1.6600480747670940, 0.89999999999999991, 0.69999999999999996 },
  { 1.6044591960982202, 0.89999999999999991, 0.80000000000000004 },
  { 1.5536420236310948, 0.89999999999999991, 0.90000000000000002 },
};
const double toler019 = 2.5000000000000020e-13;

template<typename Tp, unsigned int Num>
  void
  test(const testcase_comp_ellint_3<Tp> (&data)[Num], Tp toler)
  {
    const Tp eps = std::numeric_limits<Tp>::epsilon();
    Tp max_abs_diff = -Tp(1);
    Tp max_abs_frac = -Tp(1);
    unsigned int num_datum = Num;
    for (unsigned int i = 0; i < num_datum; ++i)
      {
	const Tp f = std::comp_ellint_3(data[i].k, data[i].nu);
	const Tp f0 = data[i].f0;
	const Tp diff = f - f0;
	if (std::abs(diff) > max_abs_diff)
	  max_abs_diff = std::abs(diff);
	if (std::abs(f0) > Tp(10) * eps
	 && std::abs(f) > Tp(10) * eps)
	  {
	    const Tp frac = diff / f0;
	    if (std::abs(frac) > max_abs_frac)
	      max_abs_frac = std::abs(frac);
	  }
      }
    VERIFY(max_abs_frac < toler);
  }

int
main()
{
  test(data001, toler001);
  test(data002, toler002);
  test(data003, toler003);
  test(data004, toler004);
  test(data005, toler005);
  test(data006, toler006);
  test(data007, toler007);
  test(data008, toler008);
  test(data009, toler009);
  test(data010, toler010);
  test(data011, toler011);
  test(data012, toler012);
  test(data013, toler013);
  test(data014, toler014);
  test(data015, toler015);
  test(data016, toler016);
  test(data017, toler017);
  test(data018, toler018);
  test(data019, toler019);
  return 0;
}
