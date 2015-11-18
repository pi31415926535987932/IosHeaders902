/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:38 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WKWebViewContentProvider <NSObject,UIScrollViewDelegate>
@required
-(id)web_initWithFrame:(CGRect)arg1 webView:(id)arg2;
-(void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
-(void)web_setMinimumSize:(CGSize)arg1;
-(void)web_setOverlaidAccessoryViewsInset:(CGSize)arg1;
-(void)web_computedContentInsetDidChange;
-(void)web_setFixedOverlayView:(id)arg1;
-(void)web_didSameDocumentNavigation:(unsigned)arg1;
-(void)web_countStringMatches:(id)arg1 options:(unsigned)arg2 maxCount:(unsigned)arg3;
-(void)web_findString:(id)arg1 options:(unsigned)arg2 maxCount:(unsigned)arg3;
-(void)web_hideFindUI;

@end

