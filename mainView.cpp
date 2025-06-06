﻿
// mainView.cpp: CmainView 类的实现
//
#include"gdal_priv.h"
#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "main.h"
#endif

#include "mainDoc.h"
#include "mainView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmainView

IMPLEMENT_DYNCREATE(CmainView, CView)

BEGIN_MESSAGE_MAP(CmainView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CmainView 构造/析构

CmainView::CmainView() noexcept
{
	// TODO: 在此处添加构造代码

}

CmainView::~CmainView()
{
}

BOOL CmainView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CmainView 绘图

void CmainView::OnDraw(CDC* /*pDC*/)
{
	CmainDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CmainView 打印

BOOL CmainView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CmainView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CmainView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CmainView 诊断

#ifdef _DEBUG
void CmainView::AssertValid() const
{
	CView::AssertValid();
}

void CmainView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmainDoc* CmainView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmainDoc)));
	return (CmainDoc*)m_pDocument;
}
#endif //_DEBUG


// CmainView 消息处理程序
