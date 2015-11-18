/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:22:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCachedURLResponseInternal, NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSCachedURLResponseInternal* _internal;

}

@property (copy,readonly) NSURLResponse * response; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (readonly) unsigned storagePolicy; 
+(char)supportsSecureCoding;
-(void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(id)initWithResponse:(id)arg1 data:(id)arg2 ;
-(id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned)arg4 ;
-(id)dataArray;
-(void)_deallocInternalCFCachedURLResponse;
-(id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSData *)data;
-(NSURLResponse *)response;
-(id)_initWithCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(unsigned)storagePolicy;
-(CFCachedURLResponse*)_CFCachedURLResponse;
@end
