/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:26 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PHAsset, NSString;

@interface PHAssetPTPProperties : NSObject {

	PHAsset* _asset;
	NSString* _exifTimestampString;
	NSString* _importSessionID;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSString * exifTimestampString;              //@synthesize exifTimestampString=_exifTimestampString - In the implementation block
@property (nonatomic,readonly) NSString * importSessionID;                  //@synthesize importSessionID=_importSessionID - In the implementation block
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(NSString *)importSessionID;
-(PHAsset *)asset;
-(NSString *)exifTimestampString;
@end

