﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RECOVERYREADINESS_API UpdateCellRequest : public Route53RecoveryReadinessRequest
  {
  public:
    UpdateCellRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCell"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cell.</p>
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * <p>The name of the cell.</p>
     */
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const Aws::String& value) { m_cellNameHasBeenSet = true; m_cellName = value; }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(Aws::String&& value) { m_cellNameHasBeenSet = true; m_cellName = std::move(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline void SetCellName(const char* value) { m_cellNameHasBeenSet = true; m_cellName.assign(value); }

    /**
     * <p>The name of the cell.</p>
     */
    inline UpdateCellRequest& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline UpdateCellRequest& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * <p>The name of the cell.</p>
     */
    inline UpdateCellRequest& WithCellName(const char* value) { SetCellName(value); return *this;}


    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline UpdateCellRequest& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline UpdateCellRequest& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline UpdateCellRequest& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline UpdateCellRequest& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs), which completely replaces the
     * previous list.</p>
     */
    inline UpdateCellRequest& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

  private:

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
