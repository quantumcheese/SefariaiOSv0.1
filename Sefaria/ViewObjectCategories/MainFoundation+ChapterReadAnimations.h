//
//  MainFoundation+ChapterReadAnimations.h
//  Sefaria
//
//  Created by MGM on 7/27/14.
//  Copyright (c) 2014 Test. All rights reserved.
//

#import "MainFoundation.h"

@interface MainFoundation (ChapterReadAnimations)


- (void) moveMenuAction : (UIView*) myView;
- (void) moveChapterAction : (UIView*) myView;

- (void) hideNavBar;
- (void) showNavBar;

@end
