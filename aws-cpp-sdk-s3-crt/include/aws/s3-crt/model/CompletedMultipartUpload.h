﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/CompletedPart.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>The container for the completed multipart upload details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CompletedMultipartUpload">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API CompletedMultipartUpload
  {
  public:
    CompletedMultipartUpload();
    CompletedMultipartUpload(const Aws::Utils::Xml::XmlNode& xmlNode);
    CompletedMultipartUpload& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline const Aws::Vector<CompletedPart>& GetParts() const{ return m_parts; }

    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline bool PartsHasBeenSet() const { return m_partsHasBeenSet; }

    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline void SetParts(const Aws::Vector<CompletedPart>& value) { m_partsHasBeenSet = true; m_parts = value; }

    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline void SetParts(Aws::Vector<CompletedPart>&& value) { m_partsHasBeenSet = true; m_parts = std::move(value); }

    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline CompletedMultipartUpload& WithParts(const Aws::Vector<CompletedPart>& value) { SetParts(value); return *this;}

    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline CompletedMultipartUpload& WithParts(Aws::Vector<CompletedPart>&& value) { SetParts(std::move(value)); return *this;}

    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline CompletedMultipartUpload& AddParts(const CompletedPart& value) { m_partsHasBeenSet = true; m_parts.push_back(value); return *this; }

    /**
     * <p>Array of CompletedPart data types.</p> <p>If you do not supply a valid
     * <code>Part</code> with your request, the service sends back an HTTP 400
     * response.</p>
     */
    inline CompletedMultipartUpload& AddParts(CompletedPart&& value) { m_partsHasBeenSet = true; m_parts.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CompletedPart> m_parts;
    bool m_partsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
