﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/TracingMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>The function's <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/services-xray.html">X-Ray</a>
   * tracing configuration. To sample and record incoming requests, set
   * <code>Mode</code> to <code>Active</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/TracingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API TracingConfig
  {
  public:
    TracingConfig();
    TracingConfig(Aws::Utils::Json::JsonView jsonValue);
    TracingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tracing mode.</p>
     */
    inline const TracingMode& GetMode() const{ return m_mode; }

    /**
     * <p>The tracing mode.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(const TracingMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The tracing mode.</p>
     */
    inline void SetMode(TracingMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The tracing mode.</p>
     */
    inline TracingConfig& WithMode(const TracingMode& value) { SetMode(value); return *this;}

    /**
     * <p>The tracing mode.</p>
     */
    inline TracingConfig& WithMode(TracingMode&& value) { SetMode(std::move(value)); return *this;}

  private:

    TracingMode m_mode;
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
