/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUIGridViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/OFUIWindowDraggingSource.h>

@class NSOperationQueue, OFUIGridView, NSString;

@interface OFUIGridViewController : OFUIViewController <OFUIGridViewDataSource, UIScrollViewDelegate, OFUIWindowDraggingSource> {

	unsigned _gridViewStyle;
	NSOperationQueue* _operationQueue;
	char _hideWhenDeviceRotates;
	char _maintainPercentageScrolledWhenDeviceRotates;
	OFUIGridView* gridView;

}

@property (nonatomic,retain) OFUIGridView * gridView; 
@property (nonatomic,retain,readonly) NSOperationQueue * operationQueue;                    //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) char hideWhenDeviceRotates;                                    //@synthesize hideWhenDeviceRotates=_hideWhenDeviceRotates - In the implementation block
@property (assign,nonatomic) char maintainPercentageScrolledWhenDeviceRotates;              //@synthesize maintainPercentageScrolledWhenDeviceRotates=_maintainPercentageScrolledWhenDeviceRotates - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)gridViewClass;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(unsigned)arg1 ;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(void)viewDidUnload;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)commonInit;
-(NSOperationQueue *)operationQueue;
-(void)setGridView:(OFUIGridView *)arg1 ;
-(OFUIGridView *)gridView;
-(CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2 ;
-(CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 prepareItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 cleanupItem:(id)arg2 ;
-(void)updateDisplayedCellOperationsPriority:(id)arg1 ;
-(int)numberOfCellsInGridView:(id)arg1 ;
-(id)gridView:(id)arg1 cellAtIndex:(unsigned)arg2 ;
-(void)updateDisplayedCellsOperationsPriority;
-(void)cancelAllOperations:(char)arg1 ;
-(char)hideWhenDeviceRotates;
-(void)setHideWhenDeviceRotates:(char)arg1 ;
-(char)maintainPercentageScrolledWhenDeviceRotates;
-(void)setMaintainPercentageScrolledWhenDeviceRotates:(char)arg1 ;
@end

