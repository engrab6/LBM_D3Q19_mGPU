/*
* This file is part of the Lattice Boltzmann multiple GPU distribution. 
(https://github.com/evstigneevnm/LBM_D3Q19_mGPU).
* Copyright (c) 2017-2018 Evstigneev Nikolay Mikhaylovitch and Ryabkov Oleg Igorevich.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 2 only.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once


#include "map.h"
#include "Macro.h"
#include "stream.h"
#include "collide.h"
#include "cuda_safe_call.h"



void run_single_step(dim3 dimGrid, dim3 dimBlock, int Nx, int Ny, int Nz, communication_variables *COM, microscopic_variables MV_d1, microscopic_variables MV_d2, macroscopic_variables NV_d, control_variables CV_d, real omega, real delta);
void run_single_step_streams(dim3 dimGrid, dim3 dimBlock, int Nx, int Ny, int Nz, communication_variables *COM, microscopic_variables MV_d1, microscopic_variables MV_d2, macroscopic_variables NV_d, control_variables CV_d, real omega, real delta);
