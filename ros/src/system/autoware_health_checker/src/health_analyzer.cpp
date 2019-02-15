/*
 * Copyright 2019 Autoware Foundation. All rights reserved.
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
 *
 *
 * v1.0 Masaya Kataoka
 */

#include <autoware_health_checker/health_analyzer.h>

HealthAnalyzer::HealthAnalyzer(ros::NodeHandle nh, ros::NodeHandle pnh)
{
    nh_ = nh;
    pnh_ = pnh;
    system_status_sub_ = nh_.subscribe("/system_status",1,&HealthAnalyzer::systemStatusCallback,this);
}

HealthAnalyzer::~HealthAnalyzer()
{
    
}

void HealthAnalyzer::systemStatusCallback(const autoware_system_msgs::SystemStatus::ConstPtr msg)
{
    return;
}