﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/InvalidationBatch.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>An invalidation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/Invalidation">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Invalidation
  {
  public:
    Invalidation();
    Invalidation(const Aws::Utils::Xml::XmlNode& xmlNode);
    Invalidation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline Invalidation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline Invalidation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the invalidation request. For example:
     * <code>IDFDVBD632BHDS5</code>.</p>
     */
    inline Invalidation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline Invalidation& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline Invalidation& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the invalidation request. When the invalidation batch is
     * finished, the status is <code>Completed</code>.</p>
     */
    inline Invalidation& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The date and time the invalidation request was first made. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The date and time the invalidation request was first made. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The date and time the invalidation request was first made. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The date and time the invalidation request was first made. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The date and time the invalidation request was first made. </p>
     */
    inline Invalidation& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The date and time the invalidation request was first made. </p>
     */
    inline Invalidation& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The current invalidation information for the batch request. </p>
     */
    inline const InvalidationBatch& GetInvalidationBatch() const{ return m_invalidationBatch; }

    /**
     * <p>The current invalidation information for the batch request. </p>
     */
    inline bool InvalidationBatchHasBeenSet() const { return m_invalidationBatchHasBeenSet; }

    /**
     * <p>The current invalidation information for the batch request. </p>
     */
    inline void SetInvalidationBatch(const InvalidationBatch& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = value; }

    /**
     * <p>The current invalidation information for the batch request. </p>
     */
    inline void SetInvalidationBatch(InvalidationBatch&& value) { m_invalidationBatchHasBeenSet = true; m_invalidationBatch = std::move(value); }

    /**
     * <p>The current invalidation information for the batch request. </p>
     */
    inline Invalidation& WithInvalidationBatch(const InvalidationBatch& value) { SetInvalidationBatch(value); return *this;}

    /**
     * <p>The current invalidation information for the batch request. </p>
     */
    inline Invalidation& WithInvalidationBatch(InvalidationBatch&& value) { SetInvalidationBatch(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    InvalidationBatch m_invalidationBatch;
    bool m_invalidationBatchHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
