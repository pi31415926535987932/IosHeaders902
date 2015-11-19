/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface MusicJSNativeViewEventRequest : NSObject {

	NSDictionary* _extraInfo;
	int _nativeViewEventType;
	/*^block*/id _completion;

}

@property (nonatomic,copy) NSDictionary * extraInfo;               //@synthesize extraInfo=_extraInfo - In the implementation block
@property (assign,nonatomic) int nativeViewEventType;              //@synthesize nativeViewEventType=_nativeViewEventType - In the implementation block
@property (nonatomic,copy) id completion;                          //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSDictionary *)extraInfo;
-(void)setExtraInfo:(NSDictionary *)arg1 ;
-(int)nativeViewEventType;
-(void)setNativeViewEventType:(int)arg1 ;
@end

