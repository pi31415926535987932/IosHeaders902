/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:08 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterFlow.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLRequest, NSURLResponse, NSURL;

@interface NEFilterBrowserFlow : NEFilterFlow <NSSecureCoding, NSCopying> {

	NSURLRequest* _request;
	NSURLResponse* _response;
	NSURL* _parentURL;

}

@property (retain) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (retain) NSURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (retain) NSURL * parentURL;                     //@synthesize parentURL=_parentURL - In the implementation block
+(char)supportsSecureCoding;
-(NSURL *)parentURL;
-(void)setParentURL:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 parentURL:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSURLRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURLResponse *)response;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
@end

