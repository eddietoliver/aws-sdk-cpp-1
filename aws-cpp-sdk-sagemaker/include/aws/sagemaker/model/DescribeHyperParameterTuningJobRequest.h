﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API DescribeHyperParameterTuningJobRequest : public SageMakerRequest
  {
  public:
    DescribeHyperParameterTuningJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHyperParameterTuningJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }

    /**
     * <p>The name of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}

    /**
     * <p>The name of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the tuning job.</p>
     */
    inline DescribeHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}

  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
