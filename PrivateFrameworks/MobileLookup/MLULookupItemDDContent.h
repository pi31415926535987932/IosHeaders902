/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileLookup/MobileLookup-Structs.h>
#import <MobileLookup/MLULookupItemContent.h>

@class DDPreviewAction;

@interface MLULookupItemDDContent : MLULookupItemContent {

	DDPreviewAction* _previewAction;

}
-(id)contact;
-(unsigned)commitType;
-(id)commitURL;
-(void)dismissViewController;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
-(void)setupViewControllerInCommitMode;
@end

