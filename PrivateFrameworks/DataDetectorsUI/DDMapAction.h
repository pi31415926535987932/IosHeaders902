/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDRemoteAction.h>

@class NSURL, NSString;

@interface DDMapAction : DDRemoteAction {

	NSURL* _commitURL;
	NSString* _addressString;

}
+(char)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)viewControllerProviderClass;
-(id)previewActions;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(id)commitURL;
-(id)platterTitle;
@end

