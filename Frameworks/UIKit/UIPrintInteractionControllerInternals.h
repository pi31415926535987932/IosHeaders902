/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSArray, UIPrintPanelViewController, UIPrintingProgress, PKPrintSettings, UIPrintInfo, UIPrintPageRenderer, NSURL, NSMutableSet, PKPrinter, UIPrintPaper;

@interface UIPrintInteractionControllerInternals : NSObject {

	int _pageCount;
	NSArray* _pageRanges;
	int _currentPage;
	NSRange _currentRange;
	int _pageCountWithRanges;
	int _pagesDrawn;
	UIPrintPanelViewController* _printPanelViewController;
	UIPrintingProgress* _printingProgress;
	PKPrintSettings* _printSettings;
	UIPrintInfo* _activePrintInfo;
	int _printInfoState;
	char _supressNotifyDismissed;
	UIPrintPageRenderer* _formatterRenderer;
	char _manualPrintPageEnabled;
	NSURL* _saveFileURL;
	NSURL* _tempPreviewFileURL;
	NSMutableSet* _previewStates;
	PKPrinter* _printer;
	UIPrintPaper* _paper;

}

@property (retain) NSArray * pageRanges;                      //@synthesize pageRanges=_pageRanges - In the implementation block
@property (assign) int pageCountWithRanges;                   //@synthesize pageCountWithRanges=_pageCountWithRanges - In the implementation block
@property (retain) NSMutableSet * previewStates;              //@synthesize previewStates=_previewStates - In the implementation block
@property (retain) NSURL * tempPreviewFileURL; 
@property (retain) PKPrinter * printer;                       //@synthesize printer=_printer - In the implementation block
@property (retain) UIPrintPaper * paper;                      //@synthesize paper=_paper - In the implementation block
-(id)init;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(NSArray *)pageRanges;
-(void)setPageRanges:(NSArray *)arg1 ;
-(UIPrintPaper *)paper;
-(void)setPaper:(UIPrintPaper *)arg1 ;
-(NSURL *)tempPreviewFileURL;
-(void)setTempPreviewFileURL:(NSURL *)arg1 ;
-(int)pageCountWithRanges;
-(void)setPageCountWithRanges:(int)arg1 ;
-(NSMutableSet *)previewStates;
-(void)setPreviewStates:(NSMutableSet *)arg1 ;
@end

