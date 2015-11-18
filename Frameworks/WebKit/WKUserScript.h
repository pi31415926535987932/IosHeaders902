/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:38 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WKUserScript : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserScript> _userScript;

}

@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,readonly) int injectionTime; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) char forMainFrameOnly; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)source;
-(Object*)_apiObject;
-(int)injectionTime;
-(char)isForMainFrameOnly;
-(id)initWithSource:(id)arg1 injectionTime:(int)arg2 forMainFrameOnly:(char)arg3 ;
@end
