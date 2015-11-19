/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CMKFormattingManager : NSObject {

	char _wantsCustomKerning;
	char _supportsVerticalText;

}

@property (nonatomic,readonly) char wantsCustomKerning;                //@synthesize wantsCustomKerning=_wantsCustomKerning - In the implementation block
@property (nonatomic,readonly) char supportsVerticalText;              //@synthesize supportsVerticalText=_supportsVerticalText - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)_commonCMKFormattingManagerInitialization;
-(char)wantsCustomKerning;
-(char)supportsVerticalText;
@end

