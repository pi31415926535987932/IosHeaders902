/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutElementDescriptor.h>
#import <SpringBoard/SBWorkspaceEntityGenerating.h>

@class NSString;

@interface SBLayoutElement : NSObject <SBLayoutElementDescriptor, SBWorkspaceEntityGenerating> {

	NSString* _identifier;
	int _role;
	/*^block*/id _entityGenerator;
	unsigned _supportedLayoutRoles;
	unsigned _layoutAttributes;
	Class _viewControllerClass;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int role;                                      //@synthesize role=_role - In the implementation block
@property (nonatomic,copy) id entityGenerator;                                //@synthesize entityGenerator=_entityGenerator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * layoutIdentifier; 
@property (nonatomic,readonly) int layoutRole; 
@property (nonatomic,readonly) unsigned supportedLayoutRoles;                 //@synthesize supportedLayoutRoles=_supportedLayoutRoles - In the implementation block
@property (nonatomic,readonly) unsigned layoutAttributes;                     //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass;                     //@synthesize viewControllerClass=_viewControllerClass - In the implementation block
+(id)elementWithDescriptor:(id)arg1 role:(int)arg2 ;
-(id)workspaceEntity;
-(char)supportsLayoutRole:(int)arg1 ;
-(char)hasSameIdentityAsElement:(id)arg1 ;
-(NSString *)layoutIdentifier;
-(unsigned)supportedLayoutRoles;
-(id)entityGenerator;
-(id)initWithIdentifier:(id)arg1 role:(int)arg2 supportedRoles:(unsigned)arg3 attributes:(unsigned)arg4 viewControllerClass:(Class)arg5 entityGenerator:(/*^block*/id)arg6 ;
-(void)setEntityGenerator:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)identifier;
-(Class)viewControllerClass;
-(char)hasLayoutAttributes:(unsigned)arg1 ;
-(unsigned)layoutAttributes;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(int)layoutRole;
-(int)role;
@end

