/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitIconDataSource.h>

@class NSString;

@interface MKTransitIcon : NSObject <GEOTransitIconDataSource> {

	unsigned _cartoID;
	unsigned _defaultTransitType;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int iconType; 
@property (nonatomic,readonly) unsigned cartoID;                         //@synthesize cartoID=_cartoID - In the implementation block
@property (nonatomic,readonly) unsigned defaultTransitType;              //@synthesize defaultTransitType=_defaultTransitType - In the implementation block
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
-(id)initWithCartoId:(unsigned)arg1 defaultTransitType:(unsigned)arg2 ;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(int)iconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
@end

