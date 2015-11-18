/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:59 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNNode.h>

@class NSURL;

@interface SCNReferenceNode : SCNNode {

	NSURL* _referenceURL;
	NSURL* _catalogURL;
	char _loaded;
	int _loadingPolicy;

}

@property (nonatomic,copy) NSURL * referenceURL; 
@property (assign,nonatomic) int loadingPolicy;                //@synthesize loadingPolicy=_loadingPolicy - In the implementation block
@property (getter=isLoaded,readonly) char loaded; 
+(id)referenceNodeWithURL:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)setReferenceURL:(NSURL *)arg1 ;
-(void)setLoadingPolicy:(int)arg1 ;
-(void)_loadWithCatalog:(id)arg1 ;
-(id)_resolveURL;
-(char)_isAReference;
-(NSURL *)referenceURL;
-(int)loadingPolicy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(char)isLoaded;
-(void)load;
-(id)_catalog;
-(void)unload;
@end
