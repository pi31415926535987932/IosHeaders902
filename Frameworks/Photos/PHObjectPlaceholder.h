/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:38:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject {

	NSString* _localIdentifier;
	int _assetMediaType;

}

@property (assign) int assetMediaType;              //@synthesize assetMediaType=_assetMediaType - In the implementation block
-(id)initWithLocalIdentifier:(id)arg1 ;
-(void)setAssetMediaType:(int)arg1 ;
-(int)assetMediaType;
-(id)localIdentifier;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

