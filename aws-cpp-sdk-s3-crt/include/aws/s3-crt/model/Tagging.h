﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/Tag.h>
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
   * <p>Container for <code>TagSet</code> elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/Tagging">AWS API
   * Reference</a></p>
   */
  class AWS_S3CRT_API Tagging
  {
  public:
    Tagging();
    Tagging(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tagging& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A collection for a set of tags</p>
     */
    inline const Aws::Vector<Tag>& GetTagSet() const{ return m_tagSet; }

    /**
     * <p>A collection for a set of tags</p>
     */
    inline bool TagSetHasBeenSet() const { return m_tagSetHasBeenSet; }

    /**
     * <p>A collection for a set of tags</p>
     */
    inline void SetTagSet(const Aws::Vector<Tag>& value) { m_tagSetHasBeenSet = true; m_tagSet = value; }

    /**
     * <p>A collection for a set of tags</p>
     */
    inline void SetTagSet(Aws::Vector<Tag>&& value) { m_tagSetHasBeenSet = true; m_tagSet = std::move(value); }

    /**
     * <p>A collection for a set of tags</p>
     */
    inline Tagging& WithTagSet(const Aws::Vector<Tag>& value) { SetTagSet(value); return *this;}

    /**
     * <p>A collection for a set of tags</p>
     */
    inline Tagging& WithTagSet(Aws::Vector<Tag>&& value) { SetTagSet(std::move(value)); return *this;}

    /**
     * <p>A collection for a set of tags</p>
     */
    inline Tagging& AddTagSet(const Tag& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(value); return *this; }

    /**
     * <p>A collection for a set of tags</p>
     */
    inline Tagging& AddTagSet(Tag&& value) { m_tagSetHasBeenSet = true; m_tagSet.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_tagSet;
    bool m_tagSetHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
