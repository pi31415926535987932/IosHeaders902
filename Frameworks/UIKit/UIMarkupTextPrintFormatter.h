/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPrintFormatter.h>

@class UIWebDocumentView, UIWebPaginationInfo, NSString;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {

	UIWebDocumentView* _webDocumentView;
	UIWebPaginationInfo* _paginationInfo;
	NSString* _markupText;

}

@property (nonatomic,copy) NSString * markupText;              //@synthesize markupText=_markupText - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)_recalcPageCount;
-(void)removeFromPrintPageRenderer;
-(CGRect)rectForPageAtIndex:(int)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(void)setMarkupText:(NSString *)arg1 ;
-(id)initWithMarkupText:(id)arg1 ;
-(NSString *)markupText;
@end

