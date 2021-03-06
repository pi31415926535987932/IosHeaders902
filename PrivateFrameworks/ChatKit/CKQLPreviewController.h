/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	NSArray* _previewItems;

}

@property (nonatomic,copy) NSArray * previewItems;              //@synthesize previewItems=_previewItems - In the implementation block
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(char)arg1 ;
-(id)previewActions;
-(id)currentPreviewItem;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
@end

