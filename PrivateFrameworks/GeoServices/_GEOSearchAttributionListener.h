/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:31 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject {

	NSString* _identifier;
	unsigned _version;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _errorHandlers;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                   //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(unsigned)version;
-(id)initWithIdentifier:(id)arg1 version:(unsigned)arg2 ;
-(void)handleError:(id)arg1 ;
-(void)handleInfo:(id)arg1 updatedManifest:(char)arg2 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
@end

