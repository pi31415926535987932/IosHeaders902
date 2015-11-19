/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface OADCachedDrawableStyle : NSObject {

	int mFillCategory;
	unsigned mFillIndex;
	unsigned mStrokeIndex;
	unsigned mShadowIndex;
	unsigned char mReflectionOpacity;
	unsigned mTextStyleIndex;

}

@property (nonatomic,readonly) int fillCategory; 
@property (nonatomic,readonly) unsigned fillIndex; 
@property (nonatomic,readonly) unsigned strokeIndex; 
@property (nonatomic,readonly) unsigned shadowIndex; 
@property (nonatomic,readonly) unsigned char reflectionOpacity; 
@property (nonatomic,readonly) unsigned textStyleIndex; 
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithFillCategory:(int)arg1 mFillIndex:(unsigned)arg2 strokeIndex:(unsigned)arg3 shadowIndex:(unsigned)arg4 reflectionOpacity:(unsigned char)arg5 textStyleIndex:(unsigned)arg6 ;
-(int)fillCategory;
-(unsigned)fillIndex;
-(unsigned)strokeIndex;
-(unsigned)shadowIndex;
-(unsigned char)reflectionOpacity;
-(unsigned)textStyleIndex;
@end

