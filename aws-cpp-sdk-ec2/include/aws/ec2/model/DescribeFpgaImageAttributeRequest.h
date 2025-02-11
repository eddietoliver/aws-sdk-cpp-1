﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/FpgaImageAttributeName.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeFpgaImageAttributeRequest : public EC2Request
  {
  public:
    DescribeFpgaImageAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFpgaImageAttribute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeFpgaImageAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the AFI.</p>
     */
    inline const Aws::String& GetFpgaImageId() const{ return m_fpgaImageId; }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline bool FpgaImageIdHasBeenSet() const { return m_fpgaImageIdHasBeenSet; }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(const Aws::String& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = value; }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(Aws::String&& value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId = std::move(value); }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline void SetFpgaImageId(const char* value) { m_fpgaImageIdHasBeenSet = true; m_fpgaImageId.assign(value); }

    /**
     * <p>The ID of the AFI.</p>
     */
    inline DescribeFpgaImageAttributeRequest& WithFpgaImageId(const Aws::String& value) { SetFpgaImageId(value); return *this;}

    /**
     * <p>The ID of the AFI.</p>
     */
    inline DescribeFpgaImageAttributeRequest& WithFpgaImageId(Aws::String&& value) { SetFpgaImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AFI.</p>
     */
    inline DescribeFpgaImageAttributeRequest& WithFpgaImageId(const char* value) { SetFpgaImageId(value); return *this;}


    /**
     * <p>The AFI attribute.</p>
     */
    inline const FpgaImageAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The AFI attribute.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The AFI attribute.</p>
     */
    inline void SetAttribute(const FpgaImageAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The AFI attribute.</p>
     */
    inline void SetAttribute(FpgaImageAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The AFI attribute.</p>
     */
    inline DescribeFpgaImageAttributeRequest& WithAttribute(const FpgaImageAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The AFI attribute.</p>
     */
    inline DescribeFpgaImageAttributeRequest& WithAttribute(FpgaImageAttributeName&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_fpgaImageId;
    bool m_fpgaImageIdHasBeenSet = false;

    FpgaImageAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
