/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {

	char _useCellular;
	char _powerRequired;
	float _bitRate;
	NSString* _videoType;
	unsigned _mediaAssetType;

}

@property (nonatomic,readonly) char useCellular;                     //@synthesize useCellular=_useCellular - In the implementation block
@property (nonatomic,readonly) char powerRequired;                   //@synthesize powerRequired=_powerRequired - In the implementation block
@property (nonatomic,readonly) float bitRate;                        //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,readonly) NSString * videoType;                 //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) unsigned mediaAssetType;              //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
+(id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(char)useCellular;
-(char)powerRequired;
-(NSString *)videoType;
-(float)bitRate;
-(unsigned)mediaAssetType;
@end

