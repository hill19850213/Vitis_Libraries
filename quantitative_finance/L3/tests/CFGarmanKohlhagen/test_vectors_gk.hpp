/*
 * Copyright 2019 Xilinx, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// generated from test_vectors_gk.txtusing model GarmanKohlhagenQL on Wed Aug 28 14:52:03 2019

#ifndef _TEST_VECTORS_GK_HPP_
#define _TEST_VECTORS_GK_HPP_

struct test_data_type {
    float s;
    float k;
    float r_domestic;
    float r_foreign;
    float v;
    float t;
    float exp;
};

struct test_data_type test_data[] {
    {80, 80, 0.01, 0.01, 0.01, 0.3, 0.173888}, {80, 80, 0.01, 0.01, 0.01, 1, 0.315977},
        {80, 80, 0.01, 0.01, 0.01, 3, 0.536447}, {80, 80, 0.01, 0.01, 0.1, 0.3, 1.738665},
        {80, 80, 0.01, 0.01, 0.1, 1, 3.158466}, {80, 80, 0.01, 0.01, 0.1, 3, 5.357834},
        {80, 80, 0.01, 0.01, 1, 0.3, 17.174847}, {80, 80, 0.01, 0.01, 1, 1, 30.329180},
        {80, 80, 0.01, 0.01, 1, 3, 47.631312}, {80, 80, 0.01, 0.05, 0.01, 0.3, 0.002204},
        {80, 80, 0.01, 0.05, 0.01, 1, 0.000006}, {80, 80, 0.01, 0.05, 0.01, 3, 0.000000},
        {80, 80, 0.01, 0.05, 0.1, 0.3, 1.295909}, {80, 80, 0.01, 0.05, 0.1, 1, 1.787955},
        {80, 80, 0.01, 0.05, 0.1, 3, 1.827634}, {80, 80, 0.01, 0.05, 1, 0.3, 16.603307},
#if 0
    { 80, 80, 0.01, 0.05, 1, 1, 28.203616 },
    { 80, 80, 0.01, 0.05, 1, 3, 40.632072 },
    { 80, 80, 0.01, 0.1, 0.01, 0.3, 0.000000 },
    { 80, 80, 0.01, 0.1, 0.01, 1, 0.000000 },
    { 80, 80, 0.01, 0.1, 0.01, 3, 0.000000 },
    { 80, 80, 0.01, 0.1, 0.1, 0.3, 0.861370 },
    { 80, 80, 0.01, 0.1, 0.1, 1, 0.759870 },
    { 80, 80, 0.01, 0.1, 0.1, 3, 0.299865 },
    { 80, 80, 0.01, 0.1, 1, 0.3, 15.909518 },
    { 80, 80, 0.01, 0.1, 1, 1, 25.723396 },
    { 80, 80, 0.01, 0.1, 1, 3, 33.202148 },
    { 80, 80, 0.05, 0.01, 0.01, 0.3, 0.949303 },
    { 80, 80, 0.05, 0.01, 0.01, 1, 3.105638 },
    { 80, 80, 0.05, 0.01, 0.01, 3, 8.779005 },
    { 80, 80, 0.05, 0.01, 0.1, 0.3, 2.243008 },
    { 80, 80, 0.05, 0.01, 0.1, 1, 4.893588 },
    { 80, 80, 0.05, 0.01, 0.1, 3, 10.606639 },
    { 80, 80, 0.05, 0.01, 1, 0.3, 17.550406 },
    { 80, 80, 0.05, 0.01, 1, 1, 31.309249 },
    { 80, 80, 0.05, 0.01, 1, 3, 49.411077 },
    { 80, 80, 0.05, 0.05, 0.01, 0.3, 0.171823 },
    { 80, 80, 0.05, 0.05, 0.01, 1, 0.303587 },
    { 80, 80, 0.05, 0.05, 0.01, 3, 0.475785 },
    { 80, 80, 0.05, 0.05, 0.1, 0.3, 1.718020 },
    { 80, 80, 0.05, 0.05, 0.1, 1, 3.034621 },
    { 80, 80, 0.05, 0.05, 0.1, 3, 4.751972 },
    { 80, 80, 0.05, 0.05, 1, 0.3, 16.970910 },
    { 80, 80, 0.05, 0.05, 1, 1, 29.139956 },
    { 80, 80, 0.05, 0.05, 1, 3, 42.245184 },
    { 80, 80, 0.05, 0.1, 0.01, 0.3, 0.000408 },
    { 80, 80, 0.05, 0.1, 0.01, 1, 0.000000 },
    { 80, 80, 0.05, 0.1, 0.01, 3, 0.000000 },
    { 80, 80, 0.05, 0.1, 0.1, 0.3, 1.184497 },
    { 80, 80, 0.05, 0.1, 0.1, 1, 1.467100 },
    { 80, 80, 0.05, 0.1, 0.1, 3, 1.179454 },
    { 80, 80, 0.05, 0.1, 1, 0.3, 16.267246 },
    { 80, 80, 0.05, 0.1, 1, 1, 26.606347 },
    { 80, 80, 0.05, 0.1, 1, 3, 34.621134 },
    { 80, 80, 0.1, 0.01, 0.01, 0.3, 2.115174 },
    { 80, 80, 0.1, 0.01, 0.01, 1, 6.816993 },
    { 80, 80, 0.1, 0.01, 0.01, 3, 18.370185 },
    { 80, 80, 0.1, 0.01, 0.1, 0.3, 2.976544 },
    { 80, 80, 0.1, 0.01, 0.1, 1, 7.576863 },
    { 80, 80, 0.1, 0.01, 0.1, 3, 18.670050 },
    { 80, 80, 0.1, 0.01, 1, 0.3, 18.024692 },
    { 80, 80, 0.1, 0.01, 1, 1, 32.540389 },
    { 80, 80, 0.1, 0.01, 1, 3, 51.572333 },
    { 80, 80, 0.1, 0.05, 0.01, 0.3, 1.168482 },
    { 80, 80, 0.1, 0.05, 0.01, 1, 3.711361 },
    { 80, 80, 0.1, 0.05, 0.01, 3, 9.591180 },
    { 80, 80, 0.1, 0.05, 0.1, 0.3, 2.352572 },
    { 80, 80, 0.1, 0.05, 0.1, 1, 5.178461 },
    { 80, 80, 0.1, 0.05, 0.1, 3, 10.770634 },
    { 80, 80, 0.1, 0.05, 1, 0.3, 17.435321 },
    { 80, 80, 0.1, 0.05, 1, 1, 30.317708 },
    { 80, 80, 0.1, 0.05, 1, 3, 44.212315 },
    { 80, 80, 0.1, 0.1, 0.01, 0.3, 0.169277 },
    { 80, 80, 0.1, 0.1, 0.01, 1, 0.288781 },
    { 80, 80, 0.1, 0.1, 0.01, 3, 0.409512 },
    { 80, 80, 0.1, 0.1, 0.1, 0.3, 1.692558 },
    { 80, 80, 0.1, 0.1, 0.1, 1, 2.886620 },
    { 80, 80, 0.1, 0.1, 0.1, 3, 4.090061 },
    { 80, 80, 0.1, 0.1, 1, 0.3, 16.719391 },
    { 80, 80, 0.1, 0.1, 1, 1, 27.718784 },
    { 80, 80, 0.1, 0.1, 1, 3, 36.360767 },
    { 80, 100, 0.01, 0.01, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.01, 0.01, 0.01, 1, 0.000000 },
    { 80, 100, 0.01, 0.01, 0.01, 3, 0.000000 },
    { 80, 100, 0.01, 0.01, 0.1, 0.3, 0.000024 },
    { 80, 100, 0.01, 0.01, 0.1, 1, 0.039517 },
    { 80, 100, 0.01, 0.01, 0.1, 3, 0.699834 },
    { 80, 100, 0.01, 0.01, 1, 0.3, 10.893208 },
    { 80, 100, 0.01, 0.01, 1, 1, 24.993612 },
    { 80, 100, 0.01, 0.01, 1, 3, 44.222746 },
    { 80, 100, 0.01, 0.05, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.01, 0.05, 0.01, 1, 0.000000 },
    { 80, 100, 0.01, 0.05, 0.01, 3, 0.000000 },
    { 80, 100, 0.01, 0.05, 0.1, 0.3, 0.000009 },
    { 80, 100, 0.01, 0.05, 0.1, 1, 0.011479 },
    { 80, 100, 0.01, 0.05, 0.1, 3, 0.126057 },
    { 80, 100, 0.01, 0.05, 1, 0.3, 10.474630 },
    { 80, 100, 0.01, 0.05, 1, 1, 23.125884 },
    { 80, 100, 0.01, 0.05, 1, 3, 37.559440 },
    { 80, 100, 0.01, 0.1, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.01, 0.1, 0.01, 1, 0.000000 },
    { 80, 100, 0.01, 0.1, 0.01, 3, 0.000000 },
    { 80, 100, 0.01, 0.1, 0.1, 0.3, 0.000002 },
    { 80, 100, 0.01, 0.1, 0.1, 1, 0.002016 },
    { 80, 100, 0.01, 0.1, 0.1, 3, 0.008498 },
    { 80, 100, 0.01, 0.1, 1, 0.3, 9.969699 },
    { 80, 100, 0.01, 0.1, 1, 1, 20.958586 },
    { 80, 100, 0.01, 0.1, 1, 3, 30.517811 },
    { 80, 100, 0.05, 0.01, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.05, 0.01, 0.01, 1, 0.000000 },
    { 80, 100, 0.05, 0.01, 0.01, 3, 0.000000 },
    { 80, 100, 0.05, 0.01, 0.1, 0.3, 0.000062 },
    { 80, 100, 0.05, 0.01, 0.1, 1, 0.114330 },
    { 80, 100, 0.05, 0.01, 0.1, 3, 2.400845 },
    { 80, 100, 0.05, 0.01, 1, 0.3, 11.190623 },
    { 80, 100, 0.05, 0.01, 1, 1, 25.929014 },
    { 80, 100, 0.05, 0.01, 1, 3, 46.070147 },
    { 80, 100, 0.05, 0.05, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.05, 0.05, 0.01, 1, 0.000000 },
    { 80, 100, 0.05, 0.05, 0.01, 3, 0.000000 },
    { 80, 100, 0.05, 0.05, 0.1, 0.3, 0.000024 },
    { 80, 100, 0.05, 0.05, 0.1, 1, 0.037968 },
    { 80, 100, 0.05, 0.05, 0.1, 3, 0.620697 },
    { 80, 100, 0.05, 0.05, 1, 0.3, 10.763861 },
    { 80, 100, 0.05, 0.05, 1, 1, 24.013598 },
    { 80, 100, 0.05, 0.05, 1, 3, 39.222057 },
    { 80, 100, 0.05, 0.1, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.05, 0.1, 0.01, 1, 0.000000 },
    { 80, 100, 0.05, 0.1, 0.01, 3, 0.000000 },
    { 80, 100, 0.05, 0.1, 0.1, 0.3, 0.000007 },
    { 80, 100, 0.05, 0.1, 0.1, 1, 0.007926 },
    { 80, 100, 0.05, 0.1, 0.1, 3, 0.068574 },
    { 80, 100, 0.05, 0.1, 1, 0.3, 10.248873 },
    { 80, 100, 0.05, 0.1, 1, 1, 21.788659 },
    { 80, 100, 0.05, 0.1, 1, 3, 31.967323 },
    { 80, 100, 0.1, 0.01, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.1, 0.01, 0.01, 1, 0.000000 },
    { 80, 100, 0.1, 0.01, 0.01, 3, 3.555189 },
    { 80, 100, 0.1, 0.01, 0.1, 0.3, 0.000195 },
    { 80, 100, 0.1, 0.01, 0.1, 1, 0.360055 },
    { 80, 100, 0.1, 0.01, 0.1, 3, 7.202004 },
    { 80, 100, 0.1, 0.01, 1, 0.3, 11.568961 },
    { 80, 100, 0.1, 0.01, 1, 1, 27.112836 },
    { 80, 100, 0.1, 0.01, 1, 3, 48.331225 },
    { 80, 100, 0.1, 0.05, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.1, 0.05, 0.01, 1, 0.000000 },
    { 80, 100, 0.1, 0.05, 0.01, 3, 0.000003 },
    { 80, 100, 0.1, 0.05, 0.1, 0.3, 0.000078 },
    { 80, 100, 0.1, 0.05, 0.1, 1, 0.140373 },
    { 80, 100, 0.1, 0.05, 0.1, 3, 2.751731 },
    { 80, 100, 0.1, 0.05, 1, 0.3, 11.131938 },
    { 80, 100, 0.1, 0.05, 1, 1, 25.138611 },
    { 80, 100, 0.1, 0.05, 1, 3, 41.265722 },
    { 80, 100, 0.1, 0.1, 0.01, 0.3, 0.000000 },
    { 80, 100, 0.1, 0.1, 0.01, 1, 0.000000 },
    { 80, 100, 0.1, 0.1, 0.01, 3, 0.000000 },
    { 80, 100, 0.1, 0.1, 0.1, 0.3, 0.000023 },
    { 80, 100, 0.1, 0.1, 0.1, 1, 0.036116 },
    { 80, 100, 0.1, 0.1, 0.1, 3, 0.534239 },
    { 80, 100, 0.1, 0.1, 1, 0.3, 10.604334 },
    { 80, 100, 0.1, 0.1, 1, 1, 22.842441 },
    { 80, 100, 0.1, 0.1, 1, 3, 33.758737 },
    { 80, 120, 0.01, 0.01, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.01, 0.01, 0.01, 1, 0.000000 },
    { 80, 120, 0.01, 0.01, 0.01, 3, 0.000000 },
    { 80, 120, 0.01, 0.01, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.01, 0.01, 0.1, 1, 0.000054 },
    { 80, 120, 0.01, 0.01, 0.1, 3, 0.053285 },
    { 80, 120, 0.01, 0.01, 1, 0.3, 6.949110 },
    { 80, 120, 0.01, 0.01, 1, 1, 20.889544 },
    { 80, 120, 0.01, 0.01, 1, 3, 41.366139 },
    { 80, 120, 0.01, 0.05, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.01, 0.05, 0.01, 1, 0.000000 },
    { 80, 120, 0.01, 0.05, 0.01, 3, 0.000000 },
    { 80, 120, 0.01, 0.05, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.01, 0.05, 0.1, 1, 0.000008 },
    { 80, 120, 0.01, 0.05, 0.1, 3, 0.005241 },
    { 80, 120, 0.01, 0.05, 1, 0.3, 6.650069 },
    { 80, 120, 0.01, 0.05, 1, 1, 19.244308 },
    { 80, 120, 0.01, 0.05, 1, 3, 35.001062 },
    { 80, 120, 0.01, 0.1, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.01, 0.1, 0.01, 1, 0.000000 },
    { 80, 120, 0.01, 0.1, 0.01, 3, 0.000000 },
    { 80, 120, 0.01, 0.1, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.01, 0.1, 0.1, 1, 0.000001 },
    { 80, 120, 0.01, 0.1, 0.1, 3, 0.000159 },
    { 80, 120, 0.01, 0.1, 1, 0.3, 6.291402 },
    { 80, 120, 0.01, 0.1, 1, 1, 17.344600 },
    { 80, 120, 0.01, 0.1, 1, 3, 28.301037 },
    { 80, 120, 0.05, 0.01, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.05, 0.01, 0.01, 1, 0.000000 },
    { 80, 120, 0.05, 0.01, 0.01, 3, 0.000000 },
    { 80, 120, 0.05, 0.01, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.05, 0.01, 0.1, 1, 0.000297 },
    { 80, 120, 0.05, 0.01, 0.1, 3, 0.320617 },
    { 80, 120, 0.05, 0.01, 1, 0.3, 7.173036 },
    { 80, 120, 0.05, 0.01, 1, 1, 21.765020 },
    { 80, 120, 0.05, 0.01, 1, 3, 43.252146 },
    { 80, 120, 0.05, 0.05, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.05, 0.05, 0.01, 1, 0.000000 },
    { 80, 120, 0.05, 0.05, 0.01, 3, 0.000000 },
    { 80, 120, 0.05, 0.05, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.05, 0.05, 0.1, 1, 0.000052 },
    { 80, 120, 0.05, 0.05, 0.1, 3, 0.047259 },
    { 80, 120, 0.05, 0.05, 1, 0.3, 6.866595 },
    { 80, 120, 0.05, 0.05, 1, 1, 20.070453 },
    { 80, 120, 0.05, 0.05, 1, 3, 36.688474 },
    { 80, 120, 0.05, 0.1, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.05, 0.1, 0.01, 1, 0.000000 },
    { 80, 120, 0.05, 0.1, 0.01, 3, 0.000000 },
    { 80, 120, 0.05, 0.1, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.05, 0.1, 0.1, 1, 0.000005 },
    { 80, 120, 0.05, 0.1, 0.1, 3, 0.002438 },
    { 80, 120, 0.05, 0.1, 1, 0.3, 6.498910 },
    { 80, 120, 0.05, 0.1, 1, 1, 18.111604 },
    { 80, 120, 0.05, 0.1, 1, 3, 29.761282 },
    { 80, 120, 0.1, 0.01, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.1, 0.01, 0.01, 1, 0.000000 },
    { 80, 120, 0.1, 0.01, 0.01, 3, 0.000000 },
    { 80, 120, 0.1, 0.01, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.1, 0.01, 0.1, 1, 0.002029 },
    { 80, 120, 0.1, 0.01, 0.1, 3, 1.780987 },
    { 80, 120, 0.1, 0.01, 1, 0.3, 7.459716 },
    { 80, 120, 0.1, 0.01, 1, 1, 22.880042 },
    { 80, 120, 0.1, 0.01, 1, 3, 45.575612 },
    { 80, 120, 0.1, 0.05, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.1, 0.05, 0.01, 1, 0.000000 },
    { 80, 120, 0.1, 0.05, 0.01, 3, 0.000000 },
    { 80, 120, 0.1, 0.05, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.1, 0.05, 0.1, 1, 0.000427 },
    { 80, 120, 0.1, 0.05, 0.1, 3, 0.419268 },
    { 80, 120, 0.1, 0.05, 1, 0.3, 7.143922 },
    { 80, 120, 0.1, 0.05, 1, 1, 21.124139 },
    { 80, 120, 0.1, 0.05, 1, 3, 38.776360 },
    { 80, 120, 0.1, 0.1, 0.01, 0.3, 0.000000 },
    { 80, 120, 0.1, 0.1, 0.01, 1, 0.000000 },
    { 80, 120, 0.1, 0.1, 0.01, 3, 0.000000 },
    { 80, 120, 0.1, 0.1, 0.1, 0.3, 0.000000 },
    { 80, 120, 0.1, 0.1, 0.1, 1, 0.000050 },
    { 80, 120, 0.1, 0.1, 0.1, 3, 0.040677 },
    { 80, 120, 0.1, 0.1, 1, 0.3, 6.764828 },
    { 80, 120, 0.1, 0.1, 1, 1, 19.091605 },
    { 80, 120, 0.1, 0.1, 1, 3, 31.578063 },
    { 100, 80, 0.01, 0.01, 0.01, 0.3, 19.940363 },
    { 100, 80, 0.01, 0.01, 0.01, 1, 19.800997 },
    { 100, 80, 0.01, 0.01, 0.01, 3, 19.408911 },
    { 100, 80, 0.01, 0.01, 0.1, 0.3, 19.940387 },
    { 100, 80, 0.01, 0.01, 0.1, 1, 19.840514 },
    { 100, 80, 0.01, 0.01, 0.1, 3, 20.108745 },
    { 100, 80, 0.01, 0.01, 1, 0.3, 30.833572 },
    { 100, 80, 0.01, 0.01, 1, 1, 44.794609 },
    { 100, 80, 0.01, 0.01, 1, 3, 63.631657 },
    { 100, 80, 0.01, 0.05, 0.01, 0.3, 18.756489 },
    { 100, 80, 0.01, 0.05, 0.01, 1, 15.918956 },
    { 100, 80, 0.01, 0.05, 0.01, 3, 8.435155 },
    { 100, 80, 0.01, 0.05, 0.1, 0.3, 18.756552 },
    { 100, 80, 0.01, 0.05, 0.1, 1, 16.033285 },
    { 100, 80, 0.01, 0.05, 0.1, 3, 10.836000 },
    { 100, 80, 0.01, 0.05, 1, 0.3, 29.947113 },
    { 100, 80, 0.01, 0.05, 1, 1, 41.847970 },
    { 100, 80, 0.01, 0.05, 1, 3, 54.505302 },
    { 100, 80, 0.01, 0.1, 0.01, 0.3, 17.296396 },
    { 100, 80, 0.01, 0.1, 0.01, 1, 11.279755 },
    { 100, 80, 0.01, 0.1, 0.01, 3, 0.001369 },
    { 100, 80, 0.01, 0.1, 0.1, 0.3, 17.296590 },
    { 100, 80, 0.01, 0.1, 0.1, 1, 11.639810 },
    { 100, 80, 0.01, 0.1, 0.1, 3, 3.648183 },
    { 100, 80, 0.01, 0.1, 1, 0.3, 28.865357 },
    { 100, 80, 0.01, 0.1, 1, 1, 38.392591 },
    { 100, 80, 0.01, 0.1, 1, 3, 44.777404 },
    { 100, 80, 0.05, 0.01, 0.01, 0.3, 20.887462 },
    { 100, 80, 0.05, 0.01, 0.01, 1, 22.906629 },
    { 100, 80, 0.05, 0.01, 0.01, 3, 28.187915 },
    { 100, 80, 0.05, 0.01, 0.1, 0.3, 20.887471 },
    { 100, 80, 0.05, 0.01, 0.1, 1, 22.918109 },
    { 100, 80, 0.05, 0.01, 0.1, 3, 28.313973 },
    { 100, 80, 0.05, 0.01, 1, 0.3, 31.362092 },
    { 100, 80, 0.05, 0.01, 1, 1, 46.032514 },
    { 100, 80, 0.05, 0.01, 1, 3, 65.747355 },
    { 100, 80, 0.05, 0.05, 0.01, 0.3, 19.703588 },
    { 100, 80, 0.05, 0.05, 0.01, 1, 19.024588 },
    { 100, 80, 0.05, 0.05, 0.01, 3, 17.214160 },
    { 100, 80, 0.05, 0.05, 0.1, 0.3, 19.703612 },
    { 100, 80, 0.05, 0.05, 0.1, 1, 19.062556 },
    { 100, 80, 0.05, 0.05, 0.1, 3, 17.834857 },
    { 100, 80, 0.05, 0.05, 1, 0.3, 30.467449 },
    { 100, 80, 0.05, 0.05, 1, 1, 43.038187 },
    { 100, 80, 0.05, 0.05, 1, 3, 56.436217 },
    { 100, 80, 0.05, 0.1, 0.01, 0.3, 18.243495 },
    { 100, 80, 0.05, 0.1, 0.01, 1, 14.385388 },
    { 100, 80, 0.05, 0.1, 0.01, 3, 5.225187 },
    { 100, 80, 0.05, 0.1, 0.1, 0.3, 18.243573 },
    { 100, 80, 0.05, 0.1, 0.1, 1, 14.525761 },
    { 100, 80, 0.05, 0.1, 0.1, 3, 7.976915 },
    { 100, 80, 0.05, 0.1, 1, 0.3, 29.375433 },
    { 100, 80, 0.05, 0.1, 1, 1, 39.523998 },
    { 100, 80, 0.05, 0.1, 1, 3, 46.490906 },
    { 100, 80, 0.1, 0.01, 0.01, 0.3, 22.055537 },
    { 100, 80, 0.1, 0.01, 0.01, 1, 26.617990 },
    { 100, 80, 0.1, 0.01, 0.01, 3, 37.779096 },
    { 100, 80, 0.1, 0.01, 0.1, 0.3, 22.055539 },
    { 100, 80, 0.1, 0.01, 0.1, 1, 26.620006 },
    { 100, 80, 0.1, 0.01, 0.1, 3, 37.787593 },
    { 100, 80, 0.1, 0.01, 1, 0.3, 32.025236 },
    { 100, 80, 0.1, 0.01, 1, 1, 47.576576 },
    { 100, 80, 0.1, 0.01, 1, 3, 68.296906 },
    { 100, 80, 0.1, 0.05, 0.01, 0.3, 20.871663 },
    { 100, 80, 0.1, 0.05, 0.01, 1, 22.735949 },
    { 100, 80, 0.1, 0.05, 0.01, 3, 26.805340 },
    { 100, 80, 0.1, 0.05, 0.1, 0.3, 20.871670 },
    { 100, 80, 0.1, 0.05, 0.1, 1, 22.743875 },
    { 100, 80, 0.1, 0.05, 0.1, 3, 26.873914 },
    { 100, 80, 0.1, 0.05, 1, 0.3, 31.120536 },
    { 100, 80, 0.1, 0.05, 1, 1, 44.524608 },
    { 100, 80, 0.1, 0.05, 1, 3, 58.772663 },
    { 100, 80, 0.1, 0.1, 0.01, 0.3, 19.411570 },
    { 100, 80, 0.1, 0.1, 0.01, 1, 18.096748 },
    { 100, 80, 0.1, 0.1, 0.01, 3, 14.816364 },
    { 100, 80, 0.1, 0.1, 0.1, 0.3, 19.411593 },
    { 100, 80, 0.1, 0.1, 0.1, 1, 18.132864 },
    { 100, 80, 0.1, 0.1, 0.1, 3, 15.350604 },
    { 100, 80, 0.1, 0.1, 1, 0.3, 30.015904 },
    { 100, 80, 0.1, 0.1, 1, 1, 40.939190 },
    { 100, 80, 0.1, 0.1, 1, 3, 48.575102 },
    { 100, 100, 0.01, 0.01, 0.01, 0.3, 0.217360 },
    { 100, 100, 0.01, 0.01, 0.01, 1, 0.394971 },
    { 100, 100, 0.01, 0.01, 0.01, 3, 0.670558 },
    { 100, 100, 0.01, 0.01, 0.1, 0.3, 2.173331 },
    { 100, 100, 0.01, 0.01, 0.1, 1, 3.948082 },
    { 100, 100, 0.01, 0.01, 0.1, 3, 6.697292 },
    { 100, 100, 0.01, 0.01, 1, 0.3, 21.468559 },
    { 100, 100, 0.01, 0.01, 1, 1, 37.911476 },
    { 100, 100, 0.01, 0.01, 1, 3, 59.539140 },
    { 100, 100, 0.01, 0.05, 0.01, 0.3, 0.002755 },
    { 100, 100, 0.01, 0.05, 0.01, 1, 0.000007 },
    { 100, 100, 0.01, 0.05, 0.01, 3, 0.000000 },
    { 100, 100, 0.01, 0.05, 0.1, 0.3, 1.619886 },
    { 100, 100, 0.01, 0.05, 0.1, 1, 2.234944 },
    { 100, 100, 0.01, 0.05, 0.1, 3, 2.284543 },
    { 100, 100, 0.01, 0.05, 1, 0.3, 20.754134 },
    { 100, 100, 0.01, 0.05, 1, 1, 35.254520 },
    { 100, 100, 0.01, 0.05, 1, 3, 50.790090 },
    { 100, 100, 0.01, 0.1, 0.01, 0.3, 0.000000 },
    { 100, 100, 0.01, 0.1, 0.01, 1, 0.000000 },
    { 100, 100, 0.01, 0.1, 0.01, 3, 0.000000 },
    { 100, 100, 0.01, 0.1, 0.1, 0.3, 1.076712 },
    { 100, 100, 0.01, 0.1, 0.1, 1, 0.949838 },
    { 100, 100, 0.01, 0.1, 0.1, 3, 0.374831 },
    { 100, 100, 0.01, 0.1, 1, 0.3, 19.886898 },
    { 100, 100, 0.01, 0.1, 1, 1, 32.154245 },
    { 100, 100, 0.01, 0.1, 1, 3, 41.502685 },
    { 100, 100, 0.05, 0.01, 0.01, 0.3, 1.186629 },
    { 100, 100, 0.05, 0.01, 0.01, 1, 3.882048 },
    { 100, 100, 0.05, 0.01, 0.01, 3, 10.973756 },
    { 100, 100, 0.05, 0.01, 0.1, 0.3, 2.803760 },
    { 100, 100, 0.05, 0.01, 0.1, 1, 6.116985 },
    { 100, 100, 0.05, 0.01, 0.1, 3, 13.258298 },
    { 100, 100, 0.05, 0.01, 1, 0.3, 21.938008 },
    { 100, 100, 0.05, 0.01, 1, 1, 39.136561 },
    { 100, 100, 0.05, 0.01, 1, 3, 61.763846 },
    { 100, 100, 0.05, 0.05, 0.01, 0.3, 0.214779 },
    { 100, 100, 0.05, 0.05, 0.01, 1, 0.379484 },
    { 100, 100, 0.05, 0.05, 0.01, 3, 0.594732 },
    { 100, 100, 0.05, 0.05, 0.1, 0.3, 2.147525 },
    { 100, 100, 0.05, 0.05, 0.1, 1, 3.793276 },
    { 100, 100, 0.05, 0.05, 0.1, 3, 5.939966 },
    { 100, 100, 0.05, 0.05, 1, 0.3, 21.213638 },
    { 100, 100, 0.05, 0.05, 1, 1, 36.424945 },
    { 100, 100, 0.05, 0.05, 1, 3, 52.806480 },
    { 100, 100, 0.05, 0.1, 0.01, 0.3, 0.000509 },
    { 100, 100, 0.05, 0.1, 0.01, 1, 0.000000 },
    { 100, 100, 0.05, 0.1, 0.01, 3, 0.000000 },
    { 100, 100, 0.05, 0.1, 0.1, 0.3, 1.480622 },
    { 100, 100, 0.05, 0.1, 0.1, 1, 1.833875 },
    { 100, 100, 0.05, 0.1, 0.1, 3, 1.474317 },
    { 100, 100, 0.05, 0.1, 1, 0.3, 20.334058 },
    { 100, 100, 0.05, 0.1, 1, 1, 33.257934 },
    { 100, 100, 0.05, 0.1, 1, 3, 43.276418 },
    { 100, 100, 0.1, 0.01, 0.01, 0.3, 2.643967 },
    { 100, 100, 0.1, 0.01, 0.01, 1, 8.521242 },
    { 100, 100, 0.1, 0.01, 0.01, 3, 22.962731 },
    { 100, 100, 0.1, 0.01, 0.1, 0.3, 3.720680 },
    { 100, 100, 0.1, 0.01, 0.1, 1, 9.471079 },
    { 100, 100, 0.1, 0.01, 0.1, 3, 23.337562 },
    { 100, 100, 0.1, 0.01, 1, 0.3, 22.530865 },
    { 100, 100, 0.1, 0.01, 1, 1, 40.675486 },
    { 100, 100, 0.1, 0.01, 1, 3, 64.465416 },
    { 100, 100, 0.1, 0.05, 0.01, 0.3, 1.460603 },
    { 100, 100, 0.1, 0.05, 0.01, 1, 4.639201 },
    { 100, 100, 0.1, 0.05, 0.01, 3, 11.988976 },
    { 100, 100, 0.1, 0.05, 0.1, 0.3, 2.940715 },
    { 100, 100, 0.1, 0.05, 0.1, 1, 6.473076 },
    { 100, 100, 0.1, 0.05, 0.1, 3, 13.463293 },
    { 100, 100, 0.1, 0.05, 1, 0.3, 21.794151 },
    { 100, 100, 0.1, 0.05, 1, 1, 37.897135 },
    { 100, 100, 0.1, 0.05, 1, 3, 55.265393 },
    { 100, 100, 0.1, 0.1, 0.01, 0.3, 0.211596 },
    { 100, 100, 0.1, 0.1, 0.01, 1, 0.360976 },
    { 100, 100, 0.1, 0.1, 0.01, 3, 0.511890 },
    { 100, 100, 0.1, 0.1, 0.1, 0.3, 2.115697 },
    { 100, 100, 0.1, 0.1, 0.1, 1, 3.608276 },
    { 100, 100, 0.1, 0.1, 0.1, 3, 5.112576 },
    { 100, 100, 0.1, 0.1, 1, 0.3, 20.899239 },
    { 100, 100, 0.1, 0.1, 1, 1, 34.648480 },
    { 100, 100, 0.1, 0.1, 1, 3, 45.450959 },
    { 100, 120, 0.01, 0.01, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.01, 0.01, 0.01, 1, 0.000000 },
    { 100, 120, 0.01, 0.01, 0.01, 3, 0.000000 },
    { 100, 120, 0.01, 0.01, 0.1, 0.3, 0.000661 },
    { 100, 120, 0.01, 0.01, 0.1, 1, 0.145866 },
    { 100, 120, 0.01, 0.01, 0.1, 3, 1.383032 },
    { 100, 120, 0.01, 0.01, 1, 0.3, 14.911051 },
    { 100, 120, 0.01, 0.01, 1, 1, 32.435437 },
    { 100, 120, 0.01, 0.01, 1, 3, 56.068237 },
    { 100, 120, 0.01, 0.05, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.01, 0.05, 0.01, 1, 0.000000 },
    { 100, 120, 0.01, 0.05, 0.01, 3, 0.000000 },
    { 100, 120, 0.01, 0.05, 0.1, 0.3, 0.000278 },
    { 100, 120, 0.01, 0.05, 0.1, 1, 0.048572 },
    { 100, 120, 0.01, 0.05, 0.1, 3, 0.282833 },
    { 100, 120, 0.01, 0.05, 1, 0.3, 14.352763 },
    { 100, 120, 0.01, 0.05, 1, 1, 30.039949 },
    { 100, 120, 0.01, 0.05, 1, 3, 47.659208 },
    { 100, 120, 0.01, 0.1, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.01, 0.1, 0.01, 1, 0.000000 },
    { 100, 120, 0.01, 0.1, 0.01, 3, 0.000000 },
    { 100, 120, 0.01, 0.1, 0.1, 0.3, 0.000089 },
    { 100, 120, 0.01, 0.1, 0.1, 1, 0.010175 },
    { 100, 120, 0.01, 0.1, 0.1, 3, 0.022632 },
    { 100, 120, 0.01, 0.1, 1, 0.3, 13.678482 },
    { 100, 120, 0.01, 0.1, 1, 1, 27.257301 },
    { 100, 120, 0.01, 0.1, 1, 3, 38.765191 },
    { 100, 120, 0.05, 0.01, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.05, 0.01, 0.01, 1, 0.000000 },
    { 100, 120, 0.05, 0.01, 0.01, 3, 0.000068 },
    { 100, 120, 0.05, 0.01, 0.1, 0.3, 0.001486 },
    { 100, 120, 0.05, 0.01, 0.1, 1, 0.369973 },
    { 100, 120, 0.05, 0.01, 0.1, 3, 4.233848 },
    { 100, 120, 0.05, 0.01, 1, 0.3, 15.302587 },
    { 100, 120, 0.05, 0.01, 1, 1, 33.618003 },
    { 100, 120, 0.05, 0.01, 1, 3, 58.364033 },
    { 100, 120, 0.05, 0.05, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.05, 0.05, 0.01, 1, 0.000000 },
    { 100, 120, 0.05, 0.05, 0.01, 3, 0.000000 },
    { 100, 120, 0.05, 0.05, 0.1, 0.3, 0.000653 },
    { 100, 120, 0.05, 0.05, 0.1, 1, 0.140147 },
    { 100, 120, 0.05, 0.05, 0.1, 3, 1.226639 },
    { 100, 120, 0.05, 0.05, 1, 0.3, 14.733995 },
    { 100, 120, 0.05, 0.05, 1, 1, 31.163625 },
    { 100, 120, 0.05, 0.05, 1, 3, 49.728066 },
    { 100, 120, 0.05, 0.1, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.05, 0.1, 0.01, 1, 0.000000 },
    { 100, 120, 0.05, 0.1, 0.01, 3, 0.000000 },
    { 100, 120, 0.05, 0.1, 0.1, 0.3, 0.000220 },
    { 100, 120, 0.05, 0.1, 0.1, 1, 0.034723 },
    { 100, 120, 0.05, 0.1, 0.1, 3, 0.159070 },
    { 100, 120, 0.05, 0.1, 1, 0.3, 14.047028 },
    { 100, 120, 0.05, 0.1, 1, 1, 28.309663 },
    { 100, 120, 0.05, 0.1, 1, 3, 40.571850 },
    { 100, 120, 0.1, 0.01, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.1, 0.01, 0.01, 1, 0.000000 },
    { 100, 120, 0.1, 0.01, 0.01, 3, 8.146367 },
    { 100, 120, 0.1, 0.01, 0.1, 0.3, 0.003855 },
    { 100, 120, 0.1, 0.01, 0.1, 1, 0.996956 },
    { 100, 120, 0.1, 0.01, 0.1, 3, 11.291684 },
    { 100, 120, 0.1, 0.01, 1, 0.3, 15.799970 },
    { 100, 120, 0.1, 0.01, 1, 1, 35.112552 },
    { 100, 120, 0.1, 0.01, 1, 3, 61.169842 },
    { 100, 120, 0.1, 0.05, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.1, 0.05, 0.01, 1, 0.000000 },
    { 100, 120, 0.1, 0.05, 0.01, 3, 0.018282 },
    { 100, 120, 0.1, 0.05, 0.1, 0.3, 0.001786 },
    { 100, 120, 0.1, 0.05, 0.1, 1, 0.439940 },
    { 100, 120, 0.1, 0.05, 0.1, 3, 4.728378 },
    { 100, 120, 0.1, 0.05, 1, 0.3, 15.218481 },
    { 100, 120, 0.1, 0.05, 1, 1, 32.585682 },
    { 100, 120, 0.1, 0.05, 1, 3, 52.267354 },
    { 100, 120, 0.1, 0.1, 0.01, 0.3, 0.000000 },
    { 100, 120, 0.1, 0.1, 0.01, 1, 0.000000 },
    { 100, 120, 0.1, 0.1, 0.01, 3, 0.000000 },
    { 100, 120, 0.1, 0.1, 0.1, 0.3, 0.000644 },
    { 100, 120, 0.1, 0.1, 0.1, 1, 0.133312 },
    { 100, 120, 0.1, 0.1, 0.1, 3, 1.055778 },
    { 100, 120, 0.1, 0.1, 1, 0.3, 14.515628 },
    { 100, 120, 0.1, 0.1, 1, 1, 29.643757 },
    { 100, 120, 0.1, 0.1, 1, 3, 42.801343 },
    { 120, 80, 0.01, 0.01, 0.01, 0.3, 39.880726 },
    { 120, 80, 0.01, 0.01, 0.01, 1, 39.601993 },
    { 120, 80, 0.01, 0.01, 0.01, 3, 38.817821 },
    { 120, 80, 0.01, 0.01, 0.1, 0.3, 39.880726 },
    { 120, 80, 0.01, 0.01, 0.1, 1, 39.602048 },
    { 120, 80, 0.01, 0.01, 0.1, 3, 38.871106 },
    { 120, 80, 0.01, 0.01, 1, 0.3, 46.829836 },
    { 120, 80, 0.01, 0.01, 1, 1, 60.491537 },
    { 120, 80, 0.01, 0.01, 1, 3, 80.183961 },
    { 120, 80, 0.01, 0.05, 0.01, 0.3, 38.460078 },
    { 120, 80, 0.01, 0.05, 0.01, 1, 34.943544 },
    { 120, 80, 0.01, 0.05, 0.01, 3, 25.649314 },
    { 120, 80, 0.01, 0.05, 0.1, 0.3, 38.460078 },
    { 120, 80, 0.01, 0.05, 0.1, 1, 34.943841 },
    { 120, 80, 0.01, 0.05, 0.1, 3, 25.969932 },
    { 120, 80, 0.01, 0.05, 1, 0.3, 45.633114 },
    { 120, 80, 0.01, 0.05, 1, 1, 56.708564 },
    { 120, 80, 0.01, 0.05, 1, 3, 68.901461 },
    { 120, 80, 0.01, 0.1, 0.01, 0.3, 36.707965 },
    { 120, 80, 0.01, 0.1, 0.01, 1, 29.376503 },
    { 120, 80, 0.01, 0.1, 0.01, 3, 11.262544 },
    { 120, 80, 0.01, 0.1, 0.1, 0.3, 36.707965 },
    { 120, 80, 0.01, 0.1, 0.1, 1, 29.378532 },
    { 120, 80, 0.01, 0.1, 0.1, 3, 13.043531 },
    { 120, 80, 0.01, 0.1, 1, 0.3, 44.167682 },
    { 120, 80, 0.01, 0.1, 1, 1, 52.256545 },
    { 120, 80, 0.01, 0.1, 1, 3, 56.838156 },
    { 120, 80, 0.05, 0.01, 0.01, 0.3, 40.827825 },
    { 120, 80, 0.05, 0.01, 0.01, 1, 42.707626 },
    { 120, 80, 0.05, 0.01, 0.01, 3, 47.596826 },
    { 120, 80, 0.05, 0.01, 0.1, 0.3, 40.827825 },
    { 120, 80, 0.05, 0.01, 0.1, 1, 42.707634 },
    { 120, 80, 0.05, 0.01, 0.1, 3, 47.602067 },
    { 120, 80, 0.05, 0.01, 1, 0.3, 47.477894 },
    { 120, 80, 0.05, 0.01, 1, 1, 61.951934 },
    { 120, 80, 0.05, 0.01, 1, 3, 82.597888 },
    { 120, 80, 0.05, 0.05, 0.01, 0.3, 39.407177 },
    { 120, 80, 0.05, 0.05, 0.01, 1, 38.049177 },
    { 120, 80, 0.05, 0.05, 0.01, 3, 34.428319 },
    { 120, 80, 0.05, 0.05, 0.1, 0.3, 39.407177 },
    { 120, 80, 0.05, 0.05, 0.1, 1, 38.049229 },
    { 120, 80, 0.05, 0.05, 0.1, 3, 34.475578 },
    { 120, 80, 0.05, 0.05, 1, 0.3, 46.273772 },
    { 120, 80, 0.05, 0.05, 1, 1, 58.119630 },
    { 120, 80, 0.05, 0.05, 1, 3, 71.116793 },
    { 120, 80, 0.05, 0.1, 0.01, 0.3, 37.655064 },
    { 120, 80, 0.05, 0.1, 0.01, 1, 32.482136 },
    { 120, 80, 0.05, 0.1, 0.01, 3, 20.041548 },
    { 120, 80, 0.05, 0.1, 0.1, 0.3, 37.655064 },
    { 120, 80, 0.05, 0.1, 0.1, 1, 32.482563 },
    { 120, 80, 0.05, 0.1, 0.1, 3, 20.460817 },
    { 120, 80, 0.05, 0.1, 1, 0.3, 44.798986 },
    { 120, 80, 0.05, 0.1, 1, 1, 53.606275 },
    { 120, 80, 0.05, 0.1, 1, 3, 58.817909 },
    { 120, 80, 0.1, 0.01, 0.01, 0.3, 41.995900 },
    { 120, 80, 0.1, 0.01, 0.01, 1, 46.418987 },
    { 120, 80, 0.1, 0.01, 0.01, 3, 57.188006 },
    { 120, 80, 0.1, 0.01, 0.1, 0.3, 41.995900 },
    { 120, 80, 0.1, 0.01, 0.1, 1, 46.418987 },
    { 120, 80, 0.1, 0.01, 0.1, 3, 57.188165 },
    { 120, 80, 0.1, 0.01, 1, 0.3, 48.287302 },
    { 120, 80, 0.1, 0.01, 1, 1, 63.763587 },
    { 120, 80, 0.1, 0.01, 1, 3, 85.489043 },
    { 120, 80, 0.1, 0.05, 0.01, 0.3, 40.575251 },
    { 120, 80, 0.1, 0.05, 0.01, 1, 41.760537 },
    { 120, 80, 0.1, 0.05, 0.01, 3, 44.019500 },
    { 120, 80, 0.1, 0.05, 0.1, 0.3, 40.575251 },
    { 120, 80, 0.1, 0.05, 0.1, 1, 41.760542 },
    { 120, 80, 0.1, 0.05, 0.1, 3, 44.021938 },
    { 120, 80, 0.1, 0.05, 1, 0.3, 47.074161 },
    { 120, 80, 0.1, 0.05, 1, 1, 59.872141 },
    { 120, 80, 0.1, 0.05, 1, 3, 73.780781 },
    { 120, 80, 0.1, 0.1, 0.01, 0.3, 38.823139 },
    { 120, 80, 0.1, 0.1, 0.01, 1, 36.193497 },
    { 120, 80, 0.1, 0.1, 0.01, 3, 29.632729 },
    { 120, 80, 0.1, 0.1, 0.1, 0.3, 38.823139 },
    { 120, 80, 0.1, 0.1, 0.1, 1, 36.193546 },
    { 120, 80, 0.1, 0.1, 0.1, 3, 29.673405 },
    { 120, 80, 0.1, 0.1, 1, 0.3, 45.587968 },
    { 120, 80, 0.1, 0.1, 1, 1, 55.285102 },
    { 120, 80, 0.1, 0.1, 1, 3, 61.210791 },
    { 120, 100, 0.01, 0.01, 0.01, 0.3, 19.940363 },
    { 120, 100, 0.01, 0.01, 0.01, 1, 19.800997 },
    { 120, 100, 0.01, 0.01, 0.01, 3, 19.408911 },
    { 120, 100, 0.01, 0.01, 0.1, 0.3, 19.941024 },
    { 120, 100, 0.01, 0.01, 0.1, 1, 19.946863 },
    { 120, 100, 0.01, 0.01, 0.1, 3, 20.791943 },
    { 120, 100, 0.01, 0.01, 1, 0.3, 34.851414 },
    { 120, 100, 0.01, 0.01, 1, 1, 52.236433 },
    { 120, 100, 0.01, 0.01, 1, 3, 75.477148 },
    { 120, 100, 0.01, 0.05, 0.01, 0.3, 18.519715 },
    { 120, 100, 0.01, 0.05, 0.01, 1, 15.142548 },
    { 120, 100, 0.01, 0.05, 0.01, 3, 6.240472 },
    { 120, 100, 0.01, 0.05, 0.1, 0.3, 18.521201 },
    { 120, 100, 0.01, 0.05, 0.1, 1, 15.512520 },
    { 120, 100, 0.01, 0.05, 0.1, 3, 10.474252 },
    { 120, 100, 0.01, 0.05, 1, 0.3, 33.822302 },
    { 120, 100, 0.01, 0.05, 1, 1, 48.760550 },
    { 120, 100, 0.01, 0.05, 1, 3, 64.604437 },
    { 120, 100, 0.01, 0.1, 0.01, 0.3, 16.767602 },
    { 120, 100, 0.01, 0.1, 0.01, 1, 9.575507 },
    { 120, 100, 0.01, 0.1, 0.01, 3, 0.000000 },
    { 120, 100, 0.01, 0.1, 0.1, 0.3, 16.771457 },
    { 120, 100, 0.01, 0.1, 0.1, 1, 10.572463 },
    { 120, 100, 0.01, 0.1, 0.1, 3, 3.145317 },
    { 120, 100, 0.01, 0.1, 1, 0.3, 32.567572 },
    { 120, 100, 0.01, 0.1, 1, 1, 44.688058 },
    { 120, 100, 0.01, 0.1, 1, 3, 53.023476 },
    { 120, 100, 0.05, 0.01, 0.01, 0.3, 21.124237 },
    { 120, 100, 0.05, 0.01, 0.01, 1, 23.683038 },
    { 120, 100, 0.05, 0.01, 0.01, 3, 30.382666 },
    { 120, 100, 0.05, 0.01, 0.1, 0.3, 21.124515 },
    { 120, 100, 0.05, 0.01, 0.1, 1, 23.731609 },
    { 120, 100, 0.05, 0.01, 0.1, 3, 30.665500 },
    { 120, 100, 0.05, 0.01, 1, 0.3, 35.477000 },
    { 120, 100, 0.05, 0.01, 1, 1, 53.722987 },
    { 120, 100, 0.05, 0.01, 1, 3, 78.041874 },
    { 120, 100, 0.05, 0.05, 0.01, 0.3, 19.703588 },
    { 120, 100, 0.05, 0.05, 0.01, 1, 19.024588 },
    { 120, 100, 0.05, 0.05, 0.01, 3, 17.214160 },
    { 120, 100, 0.05, 0.05, 0.1, 0.3, 19.704241 },
    { 120, 100, 0.05, 0.05, 0.1, 1, 19.164735 },
    { 120, 100, 0.05, 0.05, 0.1, 3, 18.440799 },
    { 120, 100, 0.05, 0.05, 1, 0.3, 34.437583 },
    { 120, 100, 0.05, 0.05, 1, 1, 50.188213 },
    { 120, 100, 0.05, 0.05, 1, 3, 66.942225 },
    { 120, 100, 0.05, 0.1, 0.01, 0.3, 17.951476 },
    { 120, 100, 0.05, 0.1, 0.01, 1, 13.457548 },
    { 120, 100, 0.05, 0.1, 0.01, 3, 2.845670 },
    { 120, 100, 0.05, 0.1, 0.1, 0.3, 17.953262 },
    { 120, 100, 0.05, 0.1, 0.1, 1, 13.897488 },
    { 120, 100, 0.05, 0.1, 0.1, 3, 7.555767 },
    { 120, 100, 0.05, 0.1, 1, 0.3, 33.169957 },
    { 120, 100, 0.05, 0.1, 1, 1, 46.043229 },
    { 120, 100, 0.05, 0.1, 1, 3, 55.094743 },
    { 120, 100, 0.1, 0.01, 0.01, 0.3, 22.584330 },
    { 120, 100, 0.1, 0.01, 0.01, 1, 28.322238 },
    { 120, 100, 0.1, 0.01, 0.01, 3, 42.371642 },
    { 120, 100, 0.1, 0.01, 0.1, 0.3, 22.584419 },
    { 120, 100, 0.1, 0.01, 0.1, 1, 28.332413 },
    { 120, 100, 0.1, 0.01, 0.1, 3, 42.394274 },
    { 120, 100, 0.1, 0.01, 1, 0.3, 36.262812 },
    { 120, 100, 0.1, 0.01, 1, 1, 55.579540 },
    { 120, 100, 0.1, 0.01, 1, 3, 81.136833 },
    { 120, 100, 0.1, 0.05, 0.01, 0.3, 21.163682 },
    { 120, 100, 0.1, 0.05, 0.01, 1, 23.663789 },
    { 120, 100, 0.1, 0.05, 0.01, 3, 29.203135 },
    { 120, 100, 0.1, 0.05, 0.1, 0.3, 21.163902 },
    { 120, 100, 0.1, 0.05, 0.1, 1, 23.698512 },
    { 120, 100, 0.1, 0.05, 0.1, 3, 29.362206 },
    { 120, 100, 0.1, 0.05, 1, 0.3, 35.210709 },
    { 120, 100, 0.1, 0.05, 1, 1, 51.973452 },
    { 120, 100, 0.1, 0.05, 1, 3, 69.774985 },
    { 120, 100, 0.1, 0.1, 0.01, 0.3, 19.411570 },
    { 120, 100, 0.1, 0.1, 0.01, 1, 18.096748 },
    { 120, 100, 0.1, 0.1, 0.01, 3, 14.816364 },
    { 120, 100, 0.1, 0.1, 0.1, 0.3, 19.412213 },
    { 120, 100, 0.1, 0.1, 0.1, 1, 18.230060 },
    { 120, 100, 0.1, 0.1, 0.1, 3, 15.872143 },
    { 120, 100, 0.1, 0.1, 1, 0.3, 33.927198 },
    { 120, 100, 0.1, 0.1, 1, 1, 47.740505 },
    { 120, 100, 0.1, 0.1, 1, 3, 57.617707 },
    { 120, 120, 0.01, 0.01, 0.01, 0.3, 0.260832 },
    { 120, 120, 0.01, 0.01, 0.01, 1, 0.473965 },
    { 120, 120, 0.01, 0.01, 0.01, 3, 0.804670 },
    { 120, 120, 0.01, 0.01, 0.1, 0.3, 2.607997 },
    { 120, 120, 0.01, 0.01, 0.1, 1, 4.737699 },
    { 120, 120, 0.01, 0.01, 0.1, 3, 8.036751 },
    { 120, 120, 0.01, 0.01, 1, 0.3, 25.762270 },
    { 120, 120, 0.01, 0.01, 1, 1, 45.493771 },
    { 120, 120, 0.01, 0.01, 1, 3, 71.446968 },
    { 120, 120, 0.01, 0.05, 0.01, 0.3, 0.003306 },
    { 120, 120, 0.01, 0.05, 0.01, 1, 0.000008 },
    { 120, 120, 0.01, 0.05, 0.01, 3, 0.000000 },
    { 120, 120, 0.01, 0.05, 0.1, 0.3, 1.943864 },
    { 120, 120, 0.01, 0.05, 0.1, 1, 2.681933 },
    { 120, 120, 0.01, 0.05, 0.1, 3, 2.741451 },
    { 120, 120, 0.01, 0.05, 1, 0.3, 24.904961 },
    { 120, 120, 0.01, 0.05, 1, 1, 42.305424 },
    { 120, 120, 0.01, 0.05, 1, 3, 60.948108 },
    { 120, 120, 0.01, 0.1, 0.01, 0.3, 0.000000 },
    { 120, 120, 0.01, 0.1, 0.01, 1, 0.000000 },
    { 120, 120, 0.01, 0.1, 0.01, 3, 0.000000 },
    { 120, 120, 0.01, 0.1, 0.1, 0.3, 1.292055 },
    { 120, 120, 0.01, 0.1, 0.1, 1, 1.139805 },
    { 120, 120, 0.01, 0.1, 0.1, 3, 0.449797 },
    { 120, 120, 0.01, 0.1, 1, 0.3, 23.864278 },
    { 120, 120, 0.01, 0.1, 1, 1, 38.585094 },
    { 120, 120, 0.01, 0.1, 1, 3, 49.803222 },
    { 120, 120, 0.05, 0.01, 0.01, 0.3, 1.423955 },
    { 120, 120, 0.05, 0.01, 0.01, 1, 4.658457 },
    { 120, 120, 0.05, 0.01, 0.01, 3, 13.168507 },
    { 120, 120, 0.05, 0.01, 0.1, 0.3, 3.364512 },
    { 120, 120, 0.05, 0.01, 0.1, 1, 7.340382 },
    { 120, 120, 0.05, 0.01, 0.1, 3, 15.909958 },
    { 120, 120, 0.05, 0.01, 1, 0.3, 26.325609 },
    { 120, 120, 0.05, 0.01, 1, 1, 46.963873 },
    { 120, 120, 0.05, 0.01, 1, 3, 74.116615 },
    { 120, 120, 0.05, 0.05, 0.01, 0.3, 0.257735 },
    { 120, 120, 0.05, 0.05, 0.01, 1, 0.455381 },
    { 120, 120, 0.05, 0.05, 0.01, 3, 0.713678 },
    { 120, 120, 0.05, 0.05, 0.1, 0.3, 2.577030 },
    { 120, 120, 0.05, 0.05, 0.1, 1, 4.551931 },
    { 120, 120, 0.05, 0.05, 0.1, 3, 7.127959 },
    { 120, 120, 0.05, 0.05, 1, 0.3, 25.456365 },
    { 120, 120, 0.05, 0.05, 1, 1, 43.709934 },
    { 120, 120, 0.05, 0.05, 1, 3, 63.367776 },
    { 120, 120, 0.05, 0.1, 0.01, 0.3, 0.000611 },
    { 120, 120, 0.05, 0.1, 0.01, 1, 0.000000 },
    { 120, 120, 0.05, 0.1, 0.01, 3, 0.000000 },
    { 120, 120, 0.05, 0.1, 0.1, 0.3, 1.776746 },
    { 120, 120, 0.05, 0.1, 0.1, 1, 2.200650 },
    { 120, 120, 0.05, 0.1, 0.1, 3, 1.769180 },
    { 120, 120, 0.05, 0.1, 1, 0.3, 24.400869 },
    { 120, 120, 0.05, 0.1, 1, 1, 39.909521 },
    { 120, 120, 0.05, 0.1, 1, 3, 51.931701 },
    { 120, 120, 0.1, 0.01, 0.01, 0.3, 3.172761 },
    { 120, 120, 0.1, 0.01, 0.01, 1, 10.225490 },
    { 120, 120, 0.1, 0.01, 0.01, 3, 27.555278 },
    { 120, 120, 0.1, 0.01, 0.1, 0.3, 4.464816 },
    { 120, 120, 0.1, 0.01, 0.1, 1, 11.365295 },
    { 120, 120, 0.1, 0.01, 0.1, 3, 28.005074 },
    { 120, 120, 0.1, 0.01, 1, 0.3, 27.037038 },
    { 120, 120, 0.1, 0.01, 1, 1, 48.810583 },
    { 120, 120, 0.1, 0.01, 1, 3, 77.358500 },
    { 120, 120, 0.1, 0.05, 0.01, 0.3, 1.752723 },
    { 120, 120, 0.1, 0.05, 0.01, 1, 5.567041 },
    { 120, 120, 0.1, 0.05, 0.01, 3, 14.386771 },
    { 120, 120, 0.1, 0.05, 0.1, 0.3, 3.528858 },
    { 120, 120, 0.1, 0.05, 0.1, 1, 7.767691 },
    { 120, 120, 0.1, 0.05, 0.1, 3, 16.155951 },
    { 120, 120, 0.1, 0.05, 1, 0.3, 26.152981 },
    { 120, 120, 0.1, 0.05, 1, 1, 45.476562 },
    { 120, 120, 0.1, 0.05, 1, 3, 66.318472 },
    { 120, 120, 0.1, 0.1, 0.01, 0.3, 0.253915 },
    { 120, 120, 0.1, 0.1, 0.01, 1, 0.433172 },
    { 120, 120, 0.1, 0.1, 0.01, 3, 0.614268 },
    { 120, 120, 0.1, 0.1, 0.1, 0.3, 2.538837 },
    { 120, 120, 0.1, 0.1, 0.1, 1, 4.329931 },
    { 120, 120, 0.1, 0.1, 0.1, 3, 6.135091 },
    { 120, 120, 0.1, 0.1, 1, 0.3, 25.079087 },
    { 120, 120, 0.1, 0.1, 1, 1, 41.578176 },
    { 120, 120, 0.1, 0.1, 1, 3, 54.541150 },
#endif
};

#endif // include only once
